#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[201], count = 0, medie, sum = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    medie = sum / n;
    for (int i = 0; i < n; i++) {
        if (a[i] > medie) count++;
    }
    cout << count;
    return 0;
}