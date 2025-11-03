#include <bits/stdc++.h>
using namespace std;

int a,b,c;
int sum;
int input[101];

int main() {
    memset(input, 0, sizeof input);
    
    cin >> a >> b >> c;
    
    for(int i = 0; i < 3; i++) {
    	int d,e;
		cin >> d >> e;
		
		for(int j = d; j < e; j++) {
			input[j]++;
		}
	}

    for (int i = 0; i < 101; i++) {
    	if(input[i] == 1) {
    		sum += a ;
		} else if(input[i] == 2) {
			sum += b * 2;
		} else if(input[i] == 3){
			sum += c * 3;
		}
	}
	
	cout << sum;
}
