#include<bits/stdc++.h>
using namespace std;
#define fastIo cin.tie(0)->sync_with_stdio(0)
#define pii pair<int, int>
typedef long long ll;
const int INF = 1e9 + 7;
const ll LNF = 1e18 + 7;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int n, arr[100001];

void quick_sort(int st, int en) {
	if(en <= st+1) return;
	int pivot = arr[st];
	int l = st+1;
	int r = en-1;
	while(1) {
		while(l <= r && arr[l] <= pivot) l++;
		while(l <= r && arr[r] >= pivot) r--;
		if(l > r) break;
		swap(arr[l], arr[r]);
	}
	swap(arr[st], arr[r]);
	quick_sort(st, r);
	quick_sort(r+1, en);
}

int main() {
	fastIo;
	
	cin >> n;
	for(int i=0; i<n; i++) cin >> arr[i];
	quick_sort(0, n);
	for(int i=0; i<n; i++) cout << arr[i] << " ";
	
	return 0;
}
