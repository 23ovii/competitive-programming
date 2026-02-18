#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    long long prod = 1;
    for (int i = 1; i <= 16; i++) {
        prod *= a;
    }
    cout << prod << "\n";
    return 0;
}