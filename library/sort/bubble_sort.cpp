#include<bits/stdc++.h>
using namespace std;
#define fastIo cin.tie(0)->sync_with_stdio(0)
#define pii pair<int, int>
typedef long long ll;
const int INF = 1e9 + 7;
const ll LNF = 1e18 + 7;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int arr[100];

void bubble_sort() {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-1-i; j++) {
			if(arr[j] < arr[j+1]) swap(arr[j], arr[j+1]);
		}
	}
}

int main() {
	fastIo;
	
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	bubble_sort();
	for(int i=0; i<n; i++) cout << a[i] << " ";
	
	return 0;
}
