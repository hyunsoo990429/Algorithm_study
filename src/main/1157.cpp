#include <bits/stdc++.h>
using namespace std;

vector<pair<string, int>> alphas = { {"Aa", 0}, {"Bb", 0}, {"Cc", 0}, {"Dd", 0}, {"Ee", 0}, {"Ff", 0}, {"Gg", 0},
                                  {"Hh", 0}, {"Ii", 0}, {"Jj", 0}, {"Kk", 0}, {"Ll", 0}, {"Mm", 0}, {"Nn", 0},
                                  {"Oo", 0}, {"Pp", 0}, {"Qq", 0}, {"Rr", 0}, {"Ss", 0}, {"Tt", 0}, {"Uu", 0},
                                  {"Vv", 0}, {"Ww", 0}, {"Xx", 0}, {"Yy", 0}, {"Zz", 0}
};

string input;
string mx;

int main() {
	cin >> input;
	
	for(int i = 0; i < input.size(); i++) {
		for(int j = 0; j < alphas.size(); j++) {
			auto it = alphas[j].first.find(input[i]);
			
			if(it != string::npos) {
				alphas[j].second++;
			}
		}
	}
	
	for(int i = 0; i < alphas.size(); i++) {
	    for(int j = 1 + i; j < alphas.size(); j++) {
	    	if(alphas[i].second < alphas[j].second) {
	    		mx = alphas[j].first[0];
			} else if(alphas[i].second > alphas[j].second) {
				mx = alphas[i].first[0];
			}
		}	
	}
	
	cout << mx;
}
