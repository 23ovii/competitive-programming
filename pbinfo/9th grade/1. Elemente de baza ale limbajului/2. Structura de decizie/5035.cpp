#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int zz, ll, aa;
    long long cnp;
    cin >> zz >> ll >> aa >> cnp;
    int S = cnp / 1000000000000;
    int AA = cnp / 10000000000 % 100;
    int LL = cnp / 100000000 % 100;
    int ZZ = cnp / 1000000 % 100;
    int an;
    if (S <= 2) {
        an = 1900 + AA;
    } else {
        an = 2000 + AA;
    }
    int major = (an + 18) * 10000 + LL * 100 + ZZ;
    int data = aa * 10000 + ll * 100 + zz;
    if (major <= data) {
        cout << "Major";
    } else {
        cout << "Minor";
    }
    return 0;
}
