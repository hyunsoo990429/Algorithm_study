#include <bits/stdc++.h>
using namespace std;

int N;
string input;
int temp[27];

int main() {
	memset(temp, 0, sizeof temp);
	
	cin >> N;
	
	while(N--) {
		cin >> input;
		temp[(int) input[0] - 'a']++;
	}
	
    bool printed = false;
    for (int i = 0; i < 26; ++i) {
        if (temp[i] >= 5) {
            cout << char(i + 'a');
            printed = true;
        }
    }
    if (!printed) cout << "PREDAJA";
}
