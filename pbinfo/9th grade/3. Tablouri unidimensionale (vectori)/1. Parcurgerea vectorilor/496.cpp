#include <bits/stdc++.h>
using namespace std;

int prime(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    if (a == 1) return 1;
    else return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[201], last, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    last = a[n - 1];
    for (int i = 0; i < n; i++) {
        if (prime(a[i], last) == 1) count++;
    } cout << count;
    return 0;
}