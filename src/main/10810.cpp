#include <bits/stdc++.h>
using namespace std;

int N, M;
int i, j, k;

int main() {
	cin >> N >> M;
	vector<int> bucket(N, 0);
	
	while(M) {
		cin >> i >> j >> k;
		fill(bucket.begin() + i - 1, bucket.begin() + j , k);
		M--;
	}
	
	for(int n : bucket) {
		cout << n << " ";
	}
}
