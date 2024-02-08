#include<bits/stdc++.h>
using namespace std;
int n, m, y, x, sy, sx; //1 <= n, m <= 1000, y, x is starting point.
int a[1001][1001]; // 0 is accessible, 1 is inaccessible.
bool visited[1001][1001];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

//Move in all directions (up, down, left, right)
void bfs(int y, int x) {
	queue<pair<int, int>> q;
	visited[y][x] = 1;
	q.push({y, x});
	while(q.size()) {
		tie(sy, sx) = q.front(); q.pop();
		for(int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx]) continue;
			if(a[ny][nx] == 1) continue;
			visited[ny][nx] = visited[sy][sx] + 1;
			q.push({ny, nx});
		}
	}
	return;
}
