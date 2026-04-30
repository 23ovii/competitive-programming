#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    int left = 0, right = 0;
    for (char c : s) {
        if (c == '(') {
            left++;
        } else {
            right++;
        }
    } if (left == right) {
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