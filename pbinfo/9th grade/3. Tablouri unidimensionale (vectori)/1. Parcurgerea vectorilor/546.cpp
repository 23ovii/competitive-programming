#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[1001];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int div = a[n - 1];
    for(int i = 0; i < n; i++) {
        if (a[i] % div == 0) cout << a[i] << " ";
    }
    return 0;
}