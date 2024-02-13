#include<bits/stdc++.h>
using namespace std;
int n, m, y, x; //1 <= n, m <= 100, y, x is starting point.
int a[101][101]; // 0 is accessible, 1 is inaccessible.
bool visited[101][101];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

//move in all directions (up, down, left, right)
void dfs(int y, int x) {
	for(int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx]) continue;
		if(a[ny][nx] == 0) {
			visited[ny][nx] = 1;
			dfs(ny, nx);
			visited[ny][nx] = 0;
		}
	}
	return;
}

int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) cin >> a[i][j];
	}
	
	visited[y][x] = 1;
	dfs(y, x);
	return 0;
}
