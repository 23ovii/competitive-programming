#include <bits/stdc++.h>
using namespace std;
void afismat(int a[100][100], int n, int m){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        } cout << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[100][100], n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    afismat(a, n, m);
    return 0;
}