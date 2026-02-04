#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0;
    cin >> n;
    float a[201];
    for (int i = 0; i < n; i++) cin >> a[i];
    float primul = a[0], ultimul = a[n-1];
    if (primul > ultimul) swap(primul, ultimul);
    for (int i = 0; i < n; i++) {
        if (a[i] < primul || a[i] > ultimul) {
            count++;
        }
    }
    cout << count;
    return 0;
}
