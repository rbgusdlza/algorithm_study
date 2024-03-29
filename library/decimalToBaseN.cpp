#include<bits/stdc++.h>
using namespace std;
int n, b; 
vector<int> v;

int main() {
	cin >> n >> b;
	while(n > 1) {
		v.push_back(n % b);
		n /= b;
	}
	if(n == 1) v.push_back(1);
	reverse(v.begin(), v.end());
	for(int a : v) {
		// 16진법 변환을 위해 필요
		// (16진법 : 0 ~ F로 표현하는 방법)
		if(a >= 10) cout << char(a + 55);
		else cout << a;
	}
	return 0;
}
