#include <iostream>
#include <fstream>
#include <map>
#include <cctype>
#include <set>

using namespace std;

int main() {
	map <string, int> s;
	set<string> se;
	ifstream in;
	in.open("myFile.txt");
	if (in.is_open()) {
		while (true) {
			bool check = true;
			string inp;
			in >> inp;

			for (int i = 0; i < inp.size(); ++i) {
				check = (isdigit(inp[i])) ? check : false;
			}
			if (check) {
				s[inp] += 1;
				se.insert(inp);
			}
			if (in.eof()) break;
		}
	}
}
multimap<int, string> res;
for (auto i : s)
{
	res.insert(make_pair(i.second, i.first));
}
int k;
do {
	cout << "Enter k:"; cin >> k;
} while (k > se.size() || k < 0);

int d = 0;
for (auto u : res) {
	cout << u.first << " " << u.second << endl;
	d++;
	if (d == k) {
		break;
	}
}
return 0;
}