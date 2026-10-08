#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s = 0;
    cin >> n;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    cout << s;
    return 0;
}
