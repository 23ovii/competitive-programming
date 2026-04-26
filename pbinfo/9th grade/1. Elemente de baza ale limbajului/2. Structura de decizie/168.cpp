#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a > 0 && b > 0 || a < 0 && b < 0) {
        cout << "da";
    } else {
        cout << "nu";
    }
    return 0;
}