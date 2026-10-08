#include <bits/stdc++.h>
using namespace std;
void moda(int n, int &pc) {
    int inv = 0,nr = 0;
    while (n) {
        int c = n % 10;
        inv = inv * 10 + c;
        n /= 10;
    }
    while (inv) {
        nr++;
        if ((inv % 10) % 2 == 0) {
            pc = nr;
            break;
        }
        inv /= 10;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, pc;
    cin >> n;
    moda(n, pc);
    cout << pc;
    return 0;
}