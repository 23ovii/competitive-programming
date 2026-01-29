#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> covered(n, false);
    int students = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            students++;
            covered[i] = true;
            if (i > 0) covered[i - 1] = true;
            if (i < n - 1) covered[i + 1] = true;
        }
    }
    for (int i = 0; i < n; i++) {
        if (!covered[i]) {
            students++;
            if (i + 1 < n && (i + 2 >= n || s[i + 2] == '0')) {
                covered[i] = true;
                covered[i + 1] = true;
                if (i + 2 < n) covered[i + 2] = true;
            } else {
                covered[i] = true;
                if (i + 1 < n) covered[i + 1] = true;
            }
        }
    }
    cout << students << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}