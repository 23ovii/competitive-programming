#include <bits/stdc++.h>
using namespace std;
int baza(int n, int b) {
    while (n) {
        int c = n % 10;
        if (c < 0 || c > b - 1) {
            return 0;
        }
        n /= 10;
    } return 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, b;
    cin >> n >> b;
    cout << baza(n, b);
    return 0;
}