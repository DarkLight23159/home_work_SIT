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

	cout << "¬ведите кол-во слов в тексте:" << endl;
	cin >> number_word;
	cout << "¬ведите текст:" << endl;
	for (int i = 0; i < number_word; i++) {
		cin >> str;//ввод слова
	}
}