#include<iostream>
#include<set>
#include<vector>
#include<ctime>
#include<algorithm>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");

	vector <int> vec;
	int n;
	cin >> n;
	cout << "//////////////////////////////////////////////////////" << endl;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
	}