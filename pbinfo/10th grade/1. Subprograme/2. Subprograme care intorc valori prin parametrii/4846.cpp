#include <bits/stdc++.h>
using namespace std;
void consecutiv(int n, int &f) {
    for (int i = 1; i <= n; i++) {
            if (n <= i * (i + 1)) {
                f = i;
                break;
            }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, f;
    cin >> n;
    consecutiv(n, f);
    cout << f;
    return 0;
}