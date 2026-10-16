#include <bits/stdc++.h>
using namespace std;
void div(int n, int &divp, int &divi) {
    divp = 0; divi = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int j = n / i;
            if (i % 2 == 0) divp += i;
            else divi += i;
            if (j != i) {
                if (j % 2 == 0) divp += j;
                else divi += j;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, x, divp, divi, min = INT_MAX, max = -1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        div(x, divp, divi);
        if (divi > divp) {
            if (x < min) min = x;
            if (x > max) max = x;
        }
    }
    if (max != -1) {
        cout << min << " " << max;
    } else {
        cout << "nu exista";
    }
    return 0;
}