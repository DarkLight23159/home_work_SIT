#include<iostream>
#include<set>
#include<map>
#include<algorithm>
using namespace std;


int main() {
	setlocale(LC_ALL, "RUS");
	string str;

	set<string> s_input;
	set<string> s_main;
	set<string> s_other;

	cout << "Введите кол-во слов в тексте:" << endl;
	cin >> number_word;
	cout << "Введите текст:" << endl;
	for (int i = 0; i < number_word; i++) {
		cin >> str;//ввод слова
		int len = str.length() - 1;//индекс последнего символа в слове
		//первод слова в нижний регистр 
		for (int j = 0; j < len; j++) {
			str[j] = tolower(str[j]);
		}
		//проверка на конец предложения
		if (str[len] == '?') {//если вопросительное предложение 
			//то добовляем в s_input последнее слово без ?
			s_input.insert(str.substr(0, len));
			//копируем все слова в s_main 
			s_main.insert(s_input.begin(), s_input.end());
			//очищаем s_input для следующих предложений 
			s_input.clear();
		}
		else if (str[len] == '.' || str[len] == '!') {//если не вопросительное предложение
			//то добавляем в s_input последнее слово без ! или ?
			s_input.insert(str.substr(0, len));
			//копируем все слова в s_other
			s_other.insert(s_input.begin(), s_input.end());
			//очищаем s_input для следующих предложений 
			s_input.clear();
		}
		else {//если предложение не закончилось
			//то добавляем в s_input слово	
			s_input.insert(str);
		}
	}
	cout << endl;
	set <string> s_res;
	//через разность s_main и s_other оставляем только те 
	//элементы из s_main которых нет в s_other
	set_difference(s_main.begin(), s_main.end(), s_other.begin(), s_other.end(), inserter(s_res, s_res.end()));
	for (auto i : s_res) {
		cout << i << endl;
	}
}