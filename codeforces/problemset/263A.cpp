#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[5][5], onei, onej, ans = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                onei = i + 1;
                onej = j + 1;
            }
        }
    }
    if (onei == 1 || onei == 5) {
        ans += 2;
    } else if (onei == 2 || onei == 4) {
        ans++;
    }
    if (onej == 1 || onej == 5) {
        ans += 2;
    } else if (onej == 2 || onej == 4) {
        ans++;
    } cout << ans;
    return 0;
}