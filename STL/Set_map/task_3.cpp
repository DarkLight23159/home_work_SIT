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

	cout << "������� ���-�� ���� � ������:" << endl;
	cin >> number_word;
	cout << "������� �����:" << endl;
	for (int i = 0; i < number_word; i++) {
		cin >> str;//���� �����
		int len = str.length() - 1;//������ ���������� ������� � �����
		//������ ����� � ������ ������� 
		for (int j = 0; j < len; j++) {
			str[j] = tolower(str[j]);
		}
	}

}