#include<bits/stdc++.h>
using namespace std; 
const int V = 10;
vector<int> adj[V];
bool visited[V];

void dfs(int here) {
	//main logic
	cout << here << "\n";
	visited[here] = 1;
	for(int there : adj[here]) {
		if(visited[there]) continue;
		dfs(there);
	}
	return;
}

int main() {
	//initial settings
	adj[0].push_back(1);
	adj[0].push_back(2);
	
	adj[1].push_back(0);
	adj[1].push_back(2);

	adj[2].push_back(0);
	adj[2].push_back(1);

	adj[3].push_back(0);
	
	for(int i=0; i<V; i++) {
		if(adj[i].size() && visited[i] == 0) dfs(i);
	}
}
