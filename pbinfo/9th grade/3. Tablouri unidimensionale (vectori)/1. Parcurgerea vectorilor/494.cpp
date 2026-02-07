#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x[201], sum = 0, y[201];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        sum += x[i];
    }
    for (int i = 0; i < n; i++) {
        y[i] = sum - x[i];
    }
    for (int i = 0; i < n; i++) cout << y[i] << " ";
    return 0;
}