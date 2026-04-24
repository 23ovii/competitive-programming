#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int nr = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            nr++;
        }
        n /= 10;
    }
    cout << nr;
    return 0;
}