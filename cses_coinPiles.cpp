#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	while(n--) {
		long long int a, b;
		cin >> a >> b;
		int m1 = a / 3;
		int m2 = b / 3;
		int m = min(m1, m2);
		if(m == m2)
		a -= 2*m, b -= m;
		if(m == m1)
		b -= 2*m, a -= m;
		while(a && b) {
			if(a > b) {
				b--, a -= 2;
			} else {
				a--, b -= 2;
			}
		}
		if(!a and !b) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}