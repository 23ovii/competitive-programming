#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int S, c, n;
    cin >> S >> c >> n;
    if (S % c == 0 && S % n == 0) {
        cout << "CN";
    } else if (S % c == 0) {
        cout << "C";
    } else if (S % n == 0) {
        cout << "N";
    } else {
        cout << "nimic";
    }
    return 0;
}