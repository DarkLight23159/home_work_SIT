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
	cout << "//////////////////////////////////////////////////////" << endl;
	set<int> all_dgts;
	for (int i = 0; i < n; ++i) { // все цифры в строке
		int a = vec[i];
		if ((a < 10) || (a > 99)) {
			while (a > 0) {
				all_dgts.insert(a % 10);
				a /= 10;
			}
		}
	}
	set<int> double_dgts;
	for (int i = 0; i < n; ++i) { // цифры из двузначных
		int a = vec[i];
		if ((a > 9) && (a < 100)) {
			double_dgts.insert(a % 10);
			double_dgts.insert(a / 10);
		}
	}
	for (auto i : all_dgts) {
		cout << i << " ";
	}
	cout << endl;
	for (auto i : double_dgts) {
		cout << i << " ";
	}
	cout << endl;