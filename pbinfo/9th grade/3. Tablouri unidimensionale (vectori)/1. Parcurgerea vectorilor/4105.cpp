#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[1001], div[1001], count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)  {
        cin >> a[i];
        int nrdiv = 0;
        for (int d = 1; d * d <= a[i]; d++) {
            if (a[i] % d == 0) {
                nrdiv++;
                if (d * d != a[i]) nrdiv++;
            }
        }
        div[i] = nrdiv;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (div[i] == div[j]) count++;
        }
    }
    cout << count;
    return 0;
}