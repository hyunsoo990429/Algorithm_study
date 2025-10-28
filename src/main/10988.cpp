#include <bits/stdc++.h>
using namespace std;

string input;
string temp;
vector<int> cmp;

int main() {
	cin >> input;
	
	temp = input;
	cmp.assign(input.size(), 0);
	
	reverse(input.begin(), input.end());
	
	for(int i = 0; i < input.size(); i++) {
		if(input[i] == temp[i]) {
			cmp[i] = 1;
		}
	}
	
	for(int flag : cmp) {
		if(flag == 0) {
			cout << 0;
			return 0;
		}
	}
	
	cout << 1;
}
