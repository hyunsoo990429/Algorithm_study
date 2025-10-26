#include <bits/stdc++.h>
using namespace std;

string words;
int cnt = 0;

vector<string> split(const string& words, string delimeter) {
	vector<string> result;
	
	auto start = 0;
	auto end = words.find(delimeter);
	
	while(end != string::npos) {
		result.push_back(words.substr(start, end - start));
		start = end + delimeter.size();
		end = words.find(delimeter, start);
	}
	
	result.push_back(words.substr(start));
	
	return result;
}

int main() {
	getline(cin, words);
	
	auto results = split(words, " ");
	
	for(string word : results){
		if(word != "" && word != " ") {
			cnt++;
		}
	}
	
	cout << cnt;
}


