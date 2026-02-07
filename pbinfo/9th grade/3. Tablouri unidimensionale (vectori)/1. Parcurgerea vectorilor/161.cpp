#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[201], count = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != 0) {
            sum += a[i];
            count++;
        }
    } int ma = sum / count;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) a[i] = ma; 
    }
    for (int i = 0; i < n; i++) cout << a[i] << " "; 
    return 0;
}