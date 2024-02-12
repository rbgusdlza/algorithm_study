#include<bits/stdc++.h>
using namespace std;

//nCr - index
int n, r;
vector<int> b;

void combi(int start) {
	if(b.size() == r) {
		//main logic
		for(int idx : b) cout << idx << " ";
		cout << "\n";
		return;
	}
	
	for(int i = start + 1; i < n; i++) {
		b.push_back(i);
		combi(i);
		b.pop_back();
	}
	return;
}

int main() {
	cin >> n >> r;
	combi(-1);
	return 0;
}
