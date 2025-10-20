#include <bits/stdc++.h>
using namespace std;

int N;

void star(int N, int cnt){
	if(cnt == N) return;
	cout << "*";
	star(N, ++cnt);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	cin >> N;
	for(int i = 1; i <= N; i++){
		
		star(i, 0);
		cout << "\n";
	}
}
