#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("gradexi.in");
    ofstream fout("gradexi.out");
    int n, m;
    fin >> n >> m;
    int a[101][101] = {0};
    int sortat[101][2] = {0};
    for (int i = 1; i <= m; i++) {
        int x, y;
        fin >> x >> y;
        if (a[x][y] == 0) {
            a[x][y] = 1;
            a[y][x] = 1;
            sortat[x][0]++;
            sortat[y][0]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        sortat[i][1] = i;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (sortat[i][0] > sortat[j][0] || (sortat[i][0] == sortat[j][0] && sortat[i][1] > sortat[j][1])) {
                swap(sortat[i][0], sortat[j][0]);
                swap(sortat[i][1], sortat[j][1]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        fout << sortat[i][1] << " ";
    }
    return 0;
}