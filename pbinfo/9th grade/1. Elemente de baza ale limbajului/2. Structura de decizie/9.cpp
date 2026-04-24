#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int min = a;
    if (b < min) {
        min = b;
    } if (c < min) {
        min = c;
    }
    int max = a;
    if (b > max) {
        max = b;
    } if (c > max) {
        max = c;
    }
    cout << max - min;
    return 0;
}