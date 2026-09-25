#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, R;
    char s;
    cin >> A >> B;
    cin >> s;
    if (s == '+') {
        R = A + B;
        cout << R;
    } else if (s == '-') {
        if (A > B) {
            R = A - B;
        } else {
            R = B - A;
        }
        cout << R;
    } else if (s == '*') {
        R = A * B;
        cout << R;
    } else {
        if (A > B) {
            R = A / B;
        } else {
            R = B / A;
        }
        cout << R;
    }
    return 0;
}