#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n % 10000 == n / 10000) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}