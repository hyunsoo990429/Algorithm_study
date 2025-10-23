#include <bits/stdc++.h>
using namespace std;

int N, M;
int i, j;
vector<int> bucket;

int main() {
	cin >> N >> M;
	
	
	for(int i = 1; i <= N; i++){
		bucket.push_back(i);
	}
	
	while(M) {
		cin >> i >> j;
		
		bucket.insert(bucket.begin() + i - 1, *(bucket.begin() + j - 1));
		bucket.insert(bucket.begin() + j, *(bucket.begin() + i));
		
		bucket.erase(bucket.begin() + i);
		bucket.erase(bucket.begin() + j);
		
		M--;
	}
	
	for(int n : bucket) {
		cout << n << " ";
	}
}
