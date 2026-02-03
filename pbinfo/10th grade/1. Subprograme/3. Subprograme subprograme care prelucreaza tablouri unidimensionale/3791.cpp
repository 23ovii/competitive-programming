#include <bits/stdc++.h>
using namespace std;

void interclasare() {
    ifstream fin1("file1.txt");
    ifstream fin2("file2.txt");
    ofstream fout("file.out");

    int n, m, x, y;
    fin1 >> n;
    fin2 >> m;
    int i = 1, j = 1;
    fin1 >> x;
    fin2 >> y;
    while (i <= n && j <= m) {
        if (x <= y) {
            fout << x << " ";
            i++;
            if (i <= n) fin1 >> x;
        } else {
            fout << y << " ";
            j++;
            if (j <= m) fin2 >> y;
        }
    }
    while (i <= n) {
        fout << x << " ";
        i++;
        if (i <= n) fin1 >> x;
    }
    while (j <= m) {
        fout << y << " ";
        j++;
        if (j <= m) fin2 >> y;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    interclasare();
}