#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+3;
vector<int> adj[N];
vector<vector<bool>> vis;
vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int sx, sy, ex, ey;
vector<vector<pair<int, int>>> path;
int n, m;
bool isValid(int x, int y) {
	if(x < 0 or x >= n or y < 0 or y >= m)
		return false;
	if(vis[x][y] == true) // visited and a wall
		return false;
	return true;
}

void bfs() {
	queue<pair<int, int>> q;
	q.push({sx, sy});
	while(!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();
		for(auto mv : moves) {
			int mvx = mv.first;
			int mvy = mv.second;
			if(isValid(cx+mvx, cy+mvy)) {
				q.push({cx+mvx, cy+mvy});
				vis[cx+mvx][cy+mvy] = true;
				path[cx+mvx][cy+mvy] = {mvx, mvy};
			}
		}
	}
}

int main(void) {
	cin >> n >> m;
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
	}
}

