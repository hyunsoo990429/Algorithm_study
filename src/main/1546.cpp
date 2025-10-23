#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<double> scores(N);
    for (int i = 0; i < N; ++i) cin >> scores[i];

    double mx = *max_element(scores.begin(), scores.end());

    double sum = 0.0;
    for (double x : scores) sum += (x / mx) * 100.0;

    cout << fixed << setprecision(6) << (sum / N) << '\n';
    return 0;
}

