#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double d1, d2;
    cin >> d1 >> d2;
    float l = sqrt(pow(d1/2, 2) + pow(d2/2, 2));
    cout << 4 * l << " " << (d1 * d2) / 2 << "\n";
    return 0;
}