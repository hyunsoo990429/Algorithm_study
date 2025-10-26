#include <bits/stdc++.h>
using namespace std;

vector<int> pieces = {1,1,2,2,2,8};
vector<int> input;
int n;

int main() {
	while(cin >> n) {
		input.push_back(n);
	}
	
	for(int i = 0; i < pieces.size(); i++) {
		cout << pieces[i] - input[i] << " ";
	}
}

