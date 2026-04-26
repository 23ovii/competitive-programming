#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a + b > 100) {
        cout << a + b - 100;
    } else {
        cout << 0;
    }
    return 0;
}