#include<bits/stdc++.h>
using namespace std;
int n, b; 

string decimalToBaseN(int n, int b) {
	vector<int> v;
	while(n > 1) {
		v.push_back(n % b);
		n /= b;
	}
	if(n == 1) v.push_back(1);
	reverse(v.begin(), v.end());
	string ret = "";
	for(int a : v) {
		// 16진법 변환을 위해 필요
		// (16진법 : 0 ~ F로 표현하는 방법)
		if(a >= 10) ret += char(a + 55);
		else ret += a;
	}
	return ret;
}

int main() {
	// n: 바꾸려는 수, b: base(기수)
	cin >> n >> b;
	cout << decimalToBaseN(n, b) << "\n";
	return 0;
}
