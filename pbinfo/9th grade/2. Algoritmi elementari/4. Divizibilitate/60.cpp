#include <bits/stdc++.h>
using namespace std;
int cmmdc(int a, int b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    if (cmmdc(a, b) == 1) {
        cout << "PIE";
    } else {
        cout << "NOPIE";
    }
    return 0;
}