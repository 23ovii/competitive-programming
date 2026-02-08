#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a[101], b[101], count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        bool ok = 1;
        for (int j = 0; j < m; j++) {
            if (a[i] <= b[j]) {
                ok = 0;
                break;
            } 
        } if (ok) count++;
    } cout << count;
    return 0;
}