#include <iostream>
#include <fstream>
#include<cmath>
using namespace std;
int a[101], gout[101];
int main() {
    ifstream fin("ordgrext.in");
    ofstream fout("ordgrext.out");
    int x, y, n, m;
    fin >> n >> m;
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
    for (int i = 1; i <= m; i++) {
        fin >> x >> y;
        gout[x]++;
    }
    for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n;  j++) {
                if (gout[a[i]] > gout[a[j]] || (gout[a[i]] == gout[a[j]] && a[i] > a[j])) {
                    swap(a[i], a[j]);
                }
            }
    }
    for (int i = 1; i <= n; i++) {
        fout << a[i] << " ";
    }
    return 0;
}