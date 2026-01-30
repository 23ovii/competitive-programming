#include <bits/stdc++.h>
using namespace std;
void citmat(int a[100][100], int &n, int &m){
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[100][100], n, m;
    citmat(a, n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        } cout << "\n";
    }
    return 0;
}