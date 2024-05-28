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