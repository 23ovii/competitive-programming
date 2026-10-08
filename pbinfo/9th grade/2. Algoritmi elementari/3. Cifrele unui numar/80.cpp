#include <bits/stdc++.h>
using namespace std;
int cmmdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, max = -99999, nr = 0;
    cin >> n;
    while (n != 0) {
        cin >> m;
        if (cmmdc(n, m) == 1) {
            nr++;
        }
        n=m;
        }
    cout << nr;
    return 0;
}
