#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
    int f = 1;
    while (n) {
        f *= n;
        n--;
    } return f;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[13];
    cin >> n;
    int factorial = fact(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (factorial % a[i] == 0) {
            cout << a[i] << " ";
        }
    }
    return 0;
}