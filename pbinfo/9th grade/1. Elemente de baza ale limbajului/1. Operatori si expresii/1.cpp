#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("sum.in");
    ofstream fout("sum.out");
    int a, b;
    fin >> a >> b;
    fout << a + b;
    return 0;
}