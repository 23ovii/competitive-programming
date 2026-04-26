#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    int ZZ, LL, AA;
    cin >> n;
    n=n/1000000;
    ZZ=n%100;
    n=n/100;
    LL=n%100;
    n=n/100;
    AA=n%100;
    if (AA < 10) cout << "0";
    cout << AA << " ";
    if (LL < 10) cout << "0";
    cout << LL << " ";
    if (ZZ < 10) cout << "0";
    cout << ZZ;
    return 0;
}