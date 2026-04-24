#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, x;
    cin >> a >> b >> x;
    if (x >= a && x <= b) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}