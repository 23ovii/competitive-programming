#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a, b;
    cin >> a >> b;
    if (a % 2 == 0 && b % 2 == 0) {
        cout << "YES\n";
    } else if (a % 2 == 1 && b % 2 == 0 || a % 2 == 0 && b % 2 == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}