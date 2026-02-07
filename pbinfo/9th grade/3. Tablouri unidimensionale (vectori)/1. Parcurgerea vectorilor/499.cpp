#include <bits/stdc++.h>
using namespace std;
int sum(int n) {
    int suma = 0;
    while (n) {
        int x = n%10;
        suma += x;
        n /= 10;
    } return suma;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[201], count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sum(a[i]) == sum(a[j])) {
                count++;
            }
        }
    } cout << count;
    return 0;
}