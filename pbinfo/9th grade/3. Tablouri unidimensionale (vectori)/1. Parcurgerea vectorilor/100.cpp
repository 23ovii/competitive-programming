#include <bits/stdc++.h>
using namespace std;
bool prim(int n) {
    if (n < 2) return false;
    if (n % 2 == 0 && n > 2) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    } return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ifstream fin("nrapprime.in");
    ofstream fout("nrapprime.out");

    int n, a[101], count = 0;
    fin >> n;
    for (int i = 0; i < n; i++) fin >> a[i];
    for (int i = 0; i < n; i++) {
        if(prim(a[i])) count++;
    } 
    fout << count;
    return 0;
}