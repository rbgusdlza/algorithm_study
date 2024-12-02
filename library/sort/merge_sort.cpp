#include<bits/stdc++.h>
using namespace std;
#define fastIo cin.tie(0)->sync_with_stdio(0)
#define pii pair<int, int>
typedef long long ll;
const int INF = 1e9 + 7;
const ll LNF = 1e18 + 7;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int n, arr[100001], tmp[100001];

// arr[lo:hi]까지 정렬 
// arr[lo:mid]와 arr[mid:hi]는 이미 정렬 
void merge(int lo, int hi) {
	int mid = (lo+hi)/2;
	int lidx = lo, ridx = mid;
	for(int i=lo; i<hi; i++) {
		if(ridx == hi) tmp[i] = arr[lidx++];
		else if(lidx == mid) tmp[i] = arr[ridx++];
		else if(arr[lidx] <= arr[ridx]) tmp[i] = arr[lidx++];
		else tmp[i] = arr[ridx++];
	}
	for(int i=lo; i<hi; i++) arr[i] = tmp[i];
}

void merge_sort(int lo, int hi) {
	if(hi == lo + 1) return;
	int mid = (lo+hi)/2;
	merge_sort(lo, mid);
	merge_sort(mid, hi);
	merge(lo, hi);
}

int main() {
	fastIo;
	
	cin >> n;
	for(int i=0; i<n; i++) cin >> arr[i];
	merge_sort(0, n);
	for(int i=0; i<n; i++) cout << arr[i] << " ";
	
	return 0;
}
