#include <bits/stdc++.h>
using namespace std;

string a;

char rot(char input) {
	if('a' <= input && input <= 'z') {
		int temp = input - 'a';
		return (temp + 13) % 26 + 'a'; 
	}else if('A' <= input && input <= 'Z') {
		int temp = input - 'A';
		return (temp + 13) % 26 + 'A'; 
	}else{
		return input;
	}
}

int main() {
	
	getline(cin, a);
	
	for(int i = 0; i < a.size(); i++) {
		cout << rot(a[i]);
	}
	
}
