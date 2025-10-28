#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> paper(100, vector<int>(100, 0));
int N, x, y;
int cnt = 0;

int main() {
	
	cin >> N;
	
	while(N--) {
		cin >> x >> y;
		
		for(int i = y; i < y + 10; i++) {
			for(int j = x; j < x + 10; j++) {
				if(paper[i][j] == 1) continue;
				paper[i][j] = 1;
			}
		}
	}
	
	for(vector<int> row : paper) {
		for(int col : row) {
			if(col == 1) {
				cnt++;
			}
		}
	}
	
	cout << cnt;
}

