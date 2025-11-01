#include <bits/stdc++.h>
using namespace std;

vector<int> input;
vector<int> output;


void combi(int start, vector<int> &output) {
	if(output.size() == 7) {
		int sum = 0;
		
		for(int n : output) {
			sum += n;
		}
		
		if(sum == 100) {
			for(int n : output) {
				cout << n << "\n";
			}
		}
		return;
	}
	
	for(start; start < input.size(); start++) {
		output.push_back(input[start]);
		combi(start + 1, output);
		output.pop_back();
	}
}

int main() {
	input.resize(9);
	for(int i = 0; i < 9; i++) {
		cin >> input[i];
	}
	
	sort(input.begin(), input.end());
	combi(0, output);
}
