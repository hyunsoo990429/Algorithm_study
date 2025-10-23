#include <bits/stdc++.h>
using namespace std;

vector<int> bucket;
int N, M;
int i, j;
int cnt = 0;

int main() {
	
	cin >> N >> M;
	
	for(int i = 1; i <= N; i++) {
		bucket.push_back(i);
	}
	
	while(M) {
		cin >> i >> j;
		
		reverse(bucket.begin() + i - 1, bucket.begin() + j);
		
		M--;
	}
	
	
	
	for(int number : bucket) {
		cout << number << " ";
	}
}
