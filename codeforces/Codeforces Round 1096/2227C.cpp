#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> div6;
    vector<int> div2not3;
    vector<int> div3not2;
    vector<int> others;

    for (int x : a) {
        if (x % 6 == 0) {
            div6.push_back(x);
        } else if (x % 2 == 0 && x % 3 != 0) {
            div2not3.push_back(x);
        } else if (x % 3 == 0 && x % 2 != 0) {
            div3not2.push_back(x);
        } else {
            others.push_back(x);
        }
    }
    for (int x : div6) {
        cout << x << " ";
    }
    for (int x : div2not3) {
        cout << x << " ";
    }
    for (int x : others) {
        cout << x << " ";
    }
    for (int x : div3not2) {
        cout << x << " ";
    }
        cout << "\n";
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