#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s = 0;
    cin >> n;
    while (n) {
        if (n % 2 == 0) {
            s += n;
        }
        n /= 10;
    }
    cout << s;
    return 0;
}
