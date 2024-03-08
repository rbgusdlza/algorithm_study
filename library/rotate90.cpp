#include<bits/stdc++.h>
using namespace std;

// 1 <= n <= 100
int n, a[101][101];

// 2차원 배열 시계 방향으로 90도 회전 
void rotate() {
	int tmp[101][101];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            tmp[i][j] = a[n - j - 1][i];
        }
    }
    memcpy(a, tmp, sizeof(a));
    return;
}

int main() {
	cin >> n;
	rotate();
	return 0;
}
