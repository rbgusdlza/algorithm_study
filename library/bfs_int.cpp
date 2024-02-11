#include<bits/stdc++.h>
using namespace std;
const int V = 100;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int a[V+1][V+1], m, n;
bool visited[V+1][V+1];

int dfs(int y, int x){
    visited[y][x] = 1; 
    int ret = 1; 
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i]; 
        int nx = x + dx[i]; 
        if(ny < 0 || ny >= m || nx < 0 || nx >= n || visited[ny][nx] == 1) continue; 
		if(a[ny][nx] == 1) continue;
        ret += dfs(ny, nx);
    } 
    return ret; 
}
