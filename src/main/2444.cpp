#include <bits/stdc++.h>
using namespace std;

int N, mx;

int main() {
	cin >> N;
	
	vector<string> stars(2*N-1, "");
	mx = 2 * N - 1;
	
	for(int i = 0; i < mx; i++) {
		int loop1 = i + 1;
		int space = mx - loop1;
		
		while(loop1) {
			stars[i].push_back('*');
			loop1--;
		}
		
		if(space != 0) {
			int loop2 = space / 2;
			
			while(loop2) {
				stars[i].insert(stars[i].begin(), ' ');
				stars[i].insert((stars[i].end() -1), ' ');
				loop2--;
			}
		}
	}
	
	for(string star : stars) {
		cout << star << "\n";
	}
}
