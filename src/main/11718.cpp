#include <bits/stdc++.h>
using namespace std;

vector<string> words;
string input;

int main() {
	while(getline(cin, input)) {
		words.push_back(input);
	}
	
	for(string word : words) {
		cout << word << "\n";
	}
}


