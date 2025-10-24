#include <bits/stdc++.h>
using namespace std;

int N;
string input;

int main() {
	cin >> N;
	
	while(N) {
	  cin >> input;
	  cout << *input.begin() << *(input.end() - 1) << "\n";
	  N--;	
	}
}
