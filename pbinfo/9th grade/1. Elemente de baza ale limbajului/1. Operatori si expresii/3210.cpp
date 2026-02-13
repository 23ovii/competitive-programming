#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int B, S;
    cin >> B >> S;
    cout << S / B << " " << B - (S%B);
    return 0;
}