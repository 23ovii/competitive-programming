#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    if (a < b) {
        if (a < c) {
            cout << a;
        } else {
            cout << c;
        }
    } else {
        if (b < c) {
            cout << b;
        } else {
            cout << c;
        }
    }
    return 0;
}