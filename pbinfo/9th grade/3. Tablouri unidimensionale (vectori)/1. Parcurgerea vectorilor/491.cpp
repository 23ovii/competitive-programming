#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[1001], primul, ultimul, sum = 0;
    bool exista = false;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            primul = i;
            exista = true;
            break;
        }
    }
    for (int i = n - 1; i >= 0 ; i--) {
        if(a[i] % 2 == 0) {
            ultimul = i;
            break;
        }
    }
    if (!exista) cout << "NU EXISTA";
    else {
    for (int i = primul; i <= ultimul; i++) sum += a[i];
    cout << sum;
    }
    return 0;
}