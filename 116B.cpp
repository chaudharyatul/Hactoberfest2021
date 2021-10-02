#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	char arr[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(arr[i][j] == '.') {
				continue;
			}
			if(arr[i][j] == 'W') {
				if(i-1 >= 0 and arr[i-1][j] == 'P') {
					arr[i-1][j] = '.';
					arr[i][j] = '.';
					ans++;
				}else if(j-1 >= 0 and arr[i][j-1] == 'P') {
					arr[i][j-1] = '.';
					arr[i][j] = '.';
					ans++;
				}else if(i+1 < n and arr[i+1][j] == 'P') {
					arr[i+1][j] = '.';
					arr[i][j] = '.';
					ans++;
				}else if(j+1 < m and arr[i][j+1] == 'P') {
					arr[i][j+1] = '.';
					arr[i][j] = '.';
					ans++;
				}
			}
		}
	}
	cout << ans;
}