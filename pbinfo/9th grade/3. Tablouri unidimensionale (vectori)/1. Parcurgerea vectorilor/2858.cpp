#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[101], sump = 0, sumpi = 0, divzece = 0, divtrei = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = n; i >= 1; i--) {
        cout << a[i] << " ";
        if (a[i] % 2 == 0) sump += a[i];
        if (i % 2 == 0) sumpi += a[i];
        if (a[i] % 10 == 0) divzece++;
        if (a[i] % 3 == 0 && i % 2 != 0) divtrei += a[i];
}   cout << "\n" << sump << "\n" << sumpi << "\n" << divzece << "\n" << divtrei << "\n";
    return 0;
}