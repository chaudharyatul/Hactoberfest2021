// author : Anuj Maurya

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ul unsigned long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	vector<ll> v(n);
	for(auto &i : v)
		cin >> i;

	stack<ll> s;
	ll curr, max = 0;
	for(int i = 0; i < n; i++) {
		while(!s.empty()) {
			curr = v[i] xor s.top();
			if(curr > max)
				max = curr;
			if(v[i] < s.top())
				s.pop();
			else
				break;
		}
		s.push(v[i]);
	}
	cout << max << '\n';
	return 0;
}
