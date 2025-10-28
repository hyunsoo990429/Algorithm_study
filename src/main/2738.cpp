#include <bits/stdc++.h>
using namespace std;

int N, M, n;

int main() {
	cin >> N >> M;
	int cnt = 2;
	vector<vector<int>> result(N, vector<int>(M, 0));
	
	while(cnt--){
	   for(int i = 0; i < N; i++) {
		    for(int j = 0; j < M; j++) {
			  cin >> n;
			
			  result[i][j] += n;
		    }
	   }
	}

	for(vector<int> row : result) {
		for(int number : row) {
			cout << number << " ";
		}
		
		cout << "\n";
	}
}
