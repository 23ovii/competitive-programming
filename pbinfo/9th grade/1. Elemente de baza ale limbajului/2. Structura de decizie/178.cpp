#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int p = sqrt(n);
    if (p * p == n) {
        cout << "da";
    } else {
        cout << "nu";
    }
    return 0;
}