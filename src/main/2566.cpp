#include <bits/stdc++.h>
using namespace std;

int n, mx = 0;
vector<vector<int>> result(9, vector<int>(9, 0));
pair<int, int> loc;

int main() {

	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			cin >> n;
			
			result[i][j] = n;
			
			if(n > mx) {
				mx = n;
				loc.first = i;
				loc.second = j;
			}
		}
	}
	
	cout << mx << "\n" << loc.first + 1 << " " << loc.second + 1;
}
