#include <bits/stdc++.h>
using namespace std;

int N;
string like, input, pre, suf;

int main() {
	cin >> N >> like;
	
	auto pos = like.find('*');
		
	if(pos != string::npos) {
			pre = like.substr(0, pos);
			suf = like.substr(pos + 1);
	}
	
	while(N--) {
		cin >> input;
		
		if(input.size() < pre.size() + suf.size()) {
			cout << "NE" << "\n";
		}else {
			if(pre == input.substr(0, pre.size()) && suf == input.substr(input.size() - suf.size())) {
				cout << "DA" << "\n";
			}else {
			cout << "NE" << "\n";
		    }
		}
	}
}
