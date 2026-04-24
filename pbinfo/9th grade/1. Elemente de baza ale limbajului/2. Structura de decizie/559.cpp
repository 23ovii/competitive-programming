#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    } sort(a, a + 5);
    cout << a[4] + a[3] + a[2];
    return 0;
}