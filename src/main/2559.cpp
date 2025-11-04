#include <bits/stdc++.h>
using namespace std;

int a[100004];
int N, K, sum, mx;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin >> N >> K;
	int ret[N - K +1] = {0, };
	
	for(int i = 0; i < N; i++) {
		cin >> a[i];
	}
	
	for(int i = 0; i < K; i++) {
		sum += a[i];
	}
	
	int mx = sum;
	
	for(int i = K; i < N; i++) {
		sum += a[i] - a[i - K];
		if(mx < sum) {
			mx = sum;
		}
	}
	
	cout << mx;
}
