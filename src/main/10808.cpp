#include <bits/stdc++.h>
using namespace std;

int main() {
    int alphas[26];
    memset(alphas, 0, sizeof alphas);

    string s;
    cin >> s;

    for (char c : s) {
        alphas[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) cout << alphas[i] << " ";
}
