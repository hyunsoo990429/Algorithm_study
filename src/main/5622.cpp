#include <bits/stdc++.h>
using namespace std;

vector<pair<string, int>> dials = {{"ABC", 3}, {"DEF", 4}, {"GHI", 5},
	                              {"JKL", 6}, {"MNO", 7}, {"PQRS", 8},
	                              {"TUV", 9}, {"WXYZ", 10}};
string input;
int result = 0;

int main() {
	cin >> input;
	
	for(pair<string, int> dial : dials) {
		
		for(int i = 0; i < input.size(); i++) {
			auto it = dial.first.find(input[i]);
			if(it != string::npos) {
				result += dial.second;
			}
		}
	}
	
	cout << result;
}


