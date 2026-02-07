#include <bits/stdc++.h>
using namespace std;
bool prim(int n) {
    if (n < 2) return false;
    if (n % 2 == 0 && n > 2) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x[201];
    vector<int> y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (prim(x[i])) y.push_back(x[i]);
    } reverse(y.begin(), y.end());
    for (int i = 0; i < y.size(); i++) cout << y[i] << " ";
    return 0;
}