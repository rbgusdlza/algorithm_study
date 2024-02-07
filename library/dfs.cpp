#include<bits/stdc++.h>
using namespace std;
int n, m, y, x; //1 <= n, m <= 1000, y, x is starting point.
int a[1001][1001]; // 0 is accessible, 1 is inaccessible.
bool visited[1001][1001];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void dfs(int y, int x) {
	visited[y][x] = 1;
	for(int i=0; i<4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx]) continue;
		if(a[ny][nx] == 0) {
			dfs(ny, nx);
		}
	}
	return;
}

int main() {
	cin >> n >> m >> y >> x;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	
	dfs(y, x);
	return 0;
}
