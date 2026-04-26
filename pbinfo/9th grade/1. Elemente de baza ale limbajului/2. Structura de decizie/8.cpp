#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("maxim3.in");
    ofstream fout("maxim3.out");
    int a, b, c;
    fin >> a >> b >> c;
    if (a > b && a > c) {
        fout << a;
    } else if (b > a && b > c) {
        fout << b;
    } else {
        fout << c;
    }
    return 0;
}