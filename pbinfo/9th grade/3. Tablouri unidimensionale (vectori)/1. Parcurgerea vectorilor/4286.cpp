#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x[201];
    vector<int> y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (x[i] % 2 != 0) y.push_back(x[i]);
    } reverse(y.begin(), y.end());
    for (int i = 0; i < y.size(); i++) cout << y[i] << " ";
    return 0;
}