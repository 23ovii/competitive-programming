#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, a[51], contestants = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } int kth = a[k - 1];
    for (int i = 0; i < n; i++) {
        if (a[i] >= kth && a[i] > 0) contestants++;
    } cout << contestants;
    return 0;
}