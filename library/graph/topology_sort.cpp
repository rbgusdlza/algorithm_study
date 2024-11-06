#include<bits/stdc++.h>
using namespace std;
#define fastIo cin.tie(0)->sync_with_stdio(0)
#define pii pair<int, int>
typedef long long ll;
const int INF = 1e9 + 7;
const ll LNF = 1e18 + 7;
const int MAX = 50000;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int n, m, deg[MAX];
vector<int> adj[MAX];

vector<int> topology_sort() {
	vector<int> ret;
	queue<int> q;
	for(int i=1; i<=n; i++) {
		if(deg[i] == 0) q.push(i);
	}
	
	while(q.size()) {
		int x = q.front(); q.pop();
		ret.push_back(x);
		for(int nx : adj[x]) {
			deg[nx]--;
			if(deg[nx] == 0) q.push(nx);
		}
	}
	return ret;
}

int main() {
	fastIo;
	
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		int s, e;
		cin >> s >> e;
		adj[s].push_back(e);
		deg[e]++;
	}
	
	vector<int> ret = topology_sort();
	for(int z : ret) cout << z << " ";
	
	return 0;
}
