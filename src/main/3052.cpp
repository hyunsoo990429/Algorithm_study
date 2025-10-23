#include <bits/stdc++.h>
using namespace std;

vector<int> remain;
int n;
int cnt = 0;

int main() {
	
	for(int i = 0; i < 10; i++) {
		cin >> n;
		remain.push_back(n % 42);
	}
	
	sort(remain.begin(), remain.end());
	
	remain.erase(unique(remain.begin(), remain.end()), remain.end());
	
	
	for(int number : remain) {
		cnt++;
	}
	
	cout << cnt;
}
