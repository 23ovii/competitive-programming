#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, sa = 0, sb = 0;
    cin >> a >> b;
    while (a) {
        sa += a % 10;
        a /= 10;
    } while (b) {
        sb += b % 10;
        b /= 10;
    }
     if ((sa % 2 == 0 || sa % 3 == 0 || sa % 5 == 0) && 
       (sb % 2 == 0 || sb % 3 == 0 || sb % 5 == 0)) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
