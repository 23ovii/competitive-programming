#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    int l = 1, r = n;
    for(int i = n - 1; i >= 0; i--) {
        if ((n - 1 - i) % 2 == 0) {
            p[i] = r;
            r--;
        } else {
            p[i] = l;
            l++;
        }
    }
    for(int i = 0; i < p.size(); i++) cout << p[i] << " ";
    cout << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}