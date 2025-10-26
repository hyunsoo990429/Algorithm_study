#include <bits/stdc++.h>
using namespace std;

string num1, num2;

int main() {
	cin >> num1 >> num2;
	
	reverse(num1.begin(), num1.end());
	stoi(num1);
	
	reverse(num2.begin(), num2.end());
	stoi(num2);
	
	if (num1 > num2) {
		cout << num1;
	} else {
		cout << num2;
	}
}


