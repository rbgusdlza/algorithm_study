#include<bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter) {
	vector<string> ret; 
	string token;
	long long pos = 0;
	while((pos = input.find(delimiter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, delimiter.size() + pos);
	}
	
	ret.push_back(input);
	return ret;
}

int main() {
	string input = "hi im from korea";
	string delimiter = " ";
	vector<string> ret = split(input, delimiter);
	for(string s : ret) cout << s << " ";
	return 0;
}
