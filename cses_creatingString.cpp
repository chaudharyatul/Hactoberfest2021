#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	set<string> sss;
	do {
		sss.insert(s);
	} while(next_permutation(s.begin(), s.end()));
	do {
		sss.insert(s);
	} while(prev_permutation(s.begin(), s.end()));
	cout << sss.size() << '\n';
	for(auto i : sss)
		cout << i << '\n';
	return 0;
}