#include<bits/stdc++.h>
using namespace std;
const int V = 10; 
vector<int> adj[V];
int visited[V]; 

void bfs(int here) {
	queue<int> q;
	visited[here] = 1;
	q.push(here);
	while(q.size()) {
		int here = q.front(); q.pop();
		for(int there : adj[here]) {
			if(visited[there]) continue;
			//main logic
			cout << there << "\n";
			visited[there] = visited[here] + 1;
			q.push(there);
		}
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
	
	bfs(0);
}
