#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("maxim.in");
    ofstream fout("maxim.out");
    int n, m;
    fin >> n >> m;
    if (n > m) {
        fout << n;
    } else {
        fout << m;
    }
    return 0;
}