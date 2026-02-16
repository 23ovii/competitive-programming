#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    bool has_67 = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 67) {
            has_67 = true;
        }
    }
    
    if (has_67) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}