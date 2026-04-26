#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
        cout << "bisect";
    } else {
        cout << "nebisect";
    }
    return 0;
}