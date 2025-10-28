#include <bits/stdc++.h>
using namespace std;

string n;
vector<vector<string>> input(5, vector<string>(5, " "));
vector<vector<string>> result(5, vector<string>(5, " "));

int main() {

	for(int i = 0; i < 5; i++) {
		getline(cin, n);
		
		for(int j = 0; j < 5; j++) {
			
			input[i][j] = n[j];
		}
	}
	
	for(int i = 0; i < 5; i++) {
		
		for(int j = 0; j < 5; j++) {
			
			result[i][j] = input[j][i];
		}
	}
	
	for(vector<string> row : result) {
		for(string col : row) {
			
			if(col != " ") {
				cout << col;
			}
		}
	}
}
