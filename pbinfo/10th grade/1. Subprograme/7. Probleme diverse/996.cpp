#include <bits/stdc++.h>
using namespace std;
int suma_cifre(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    } return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("div3.in");
    ofstream fout("div3.out");

    int n, a[1001];
    fin >> n;
    for (int i = 0 ; i < n; i++) {
        fin >> a[i];
        if (suma_cifre(a[i]) % 3 == 0) {
            fout << a[i] << " ";
        }
    }
    return 0;
}