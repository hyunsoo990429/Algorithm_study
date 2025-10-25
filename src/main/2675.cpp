#include <bits/stdc++.h>
using namespace std;

int N, R;
string S;

void qr(int R, string S) {
	for(int i = 0; i < S.size(); i++) {
		for(int j = 0; j < R; j++) {
			cout << S[i];
		}
	}
	cout << "\n";
}

int main() {
	cin >> N;
	
	while(N) {
	   cin >> R >> S;
	   qr(R, S);
	   N--;
	}
	
}
