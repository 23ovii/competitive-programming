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
    
    int n, a[201], i, j, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    i = 1; j = n;
    while (i <= j) {
        if (prime(a[i], a[j]) == 1) count++;
        i++; j--;
    }
    cout << count;
    return 0;
}