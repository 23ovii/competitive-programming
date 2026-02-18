#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    int ap = a * a;
    int ap4 = ap * ap;
    cout << (int)(((3 * (ap + ap4)) / (ap + ap4 + sqrt(ap + ap4))) + sqrt(ap + ap4)) << "\n";
    return 0;
}   