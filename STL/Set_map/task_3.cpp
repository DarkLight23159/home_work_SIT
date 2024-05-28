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
		//�������� �� ����� �����������
		if (str[len] == '?') {//���� �������������� ����������� 
			//�� ��������� � s_input ��������� ����� ��� ?
			s_input.insert(str.substr(0, len));
			//�������� ��� ����� � s_main 
			s_main.insert(s_input.begin(), s_input.end());
			//������� s_input ��� ��������� ����������� 
			s_input.clear();
		}
		else if (str[len] == '.' || str[len] == '!') {//���� �� �������������� �����������
			//�� ��������� � s_input ��������� ����� ��� ! ��� ?
			s_input.insert(str.substr(0, len));
			//�������� ��� ����� � s_other
			s_other.insert(s_input.begin(), s_input.end());
			//������� s_input ��� ��������� ����������� 
			s_input.clear();
		}
		else {//���� ����������� �� �����������
			//�� ��������� � s_input �����	
			s_input.insert(str);
		}
	}
	cout << endl;
	set <string> s_res;
	//����� �������� s_main � s_other ��������� ������ �� 
	//�������� �� s_main ������� ��� � s_other
	set_difference(s_main.begin(), s_main.end(), s_other.begin(), s_other.end(), inserter(s_res, s_res.end()));
	for (auto i : s_res) {
		cout << i << endl;
	}
}