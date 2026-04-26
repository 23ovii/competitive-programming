#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n % 10 == n / 10 % 10 && n / 10 % 10 == n / 100) {
        cout << "da";
    } else {
        cout << "nu";
    }
    return 0;
}