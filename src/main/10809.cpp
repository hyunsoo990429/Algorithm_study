#include <bits/stdc++.h>
using namespace std;

vector<string> dc = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
vector<int> dc_int(26, -1);
string word;

int main() {
	cin >> word;
	
	for(int i = 0; i < 26; i++) {
		auto it = word.find(dc[i]);
		if(it != string::npos) {
			dc_int[i] = it;
		}
	}
	
	for(int n : dc_int) {
		cout << n << " ";
	}
}
