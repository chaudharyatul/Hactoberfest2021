// don't forget to use "long long int and double" for larger values
// look at intermediate calculation overflow
// check cp-algo 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ul unsigned long long


void hello(){
	ll n;
	cin >> n;
	int count = 0;
	// cout << __builtin_popcount(n) << '\n';
	while(n) {
		count += n&1;
		n >>= 1;
	}
	cout << count << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		hello();
	}
	return 0;
}
