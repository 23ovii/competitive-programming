#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("nraparitii.in");
    ofstream fout("nraparitii.out");

    int n, a[101], count = 0;
    fin >> n;
    for (int i = 0; i < n; i++) fin >> a[i];
    int last = a[n - 1];
    for (int i = 0; i < n; i++) {
        if (a[i] == last) count++;
    } fout << count;
    return 0;
}