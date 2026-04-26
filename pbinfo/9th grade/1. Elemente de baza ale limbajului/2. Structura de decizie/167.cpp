#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n < 0) {
        cout << "negativ";
    } else if (n == 0) {
        cout << "nul";
    } else {
        cout << "pozitiv";
    }
    return 0;
}