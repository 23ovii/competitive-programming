#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[1001], par = 0, impar = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) par++;
        else impar++;
    }
    cout << abs(par - impar);
    return 0;
}