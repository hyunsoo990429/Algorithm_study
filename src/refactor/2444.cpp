#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	cin >> N;
	
	for(int i = 1; i = N; i++) {
		for(j = 1; j = N - i; j++) {
			cout << " ";
		}
		
		for(k = 1; k = 2 * i - 1; k++) {
			cout << "*";
		}
		
		cout << "\n";
	}
	
	for(int i = N - 1; i = 1; i--) {
		for(j = 1; j = N - i; j++) {
			cout << " ";
		}
		
		for(k = 1; k = 2 * i - 1; k++){
			cout << " ";
		}
		
		cout << "\n";
	}
}
