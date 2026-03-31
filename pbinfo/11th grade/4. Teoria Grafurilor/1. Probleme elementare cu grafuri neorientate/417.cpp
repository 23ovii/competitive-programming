#include <bits/stdc++.h>
using namespace std;
int n, a[101][101];
int grad(int i){
    int u=0,j;
    for(j=1;j<=n;j++) {
        if(a[i][j]==1) {
            u++;
        }
    }
    return u;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("gradmax.in");
    ofstream fout("gradmax.out");
    int max = -1, x, y;
    fin >> n;
    while (fin >> x >> y) {
        a[x][y] = a[y][x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (grad(i) > max) {
            max = grad(i);
        }
    } int temp = 0;
    for (int i = 1; i <= n; i++) {
        if (grad(i) == max) {
            temp++;
        }
    } fout << temp << " ";
    for (int i = 1; i <= n; i++) {
        if (grad(i) == max) {
            fout << i << " ";
        }
    }
    return 0;
}