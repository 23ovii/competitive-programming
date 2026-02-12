#include <bits/stdc++.h>
using namespace std;
void teren(int x, int y) {
    int n = x * y;
    bool exista = false;
    for (int i = 2; i <= n; i += 2) {
        if (n % i == 0) {
        int arie = n / i;
        if (i < arie) {
            exista = true;
            cout << i << " parcele de arie " << arie << "\n";
        }
    }
} if (!exista) cout << "nu exista";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y;
    cin >> x >> y;
    teren(x, y);
    return 0;
}