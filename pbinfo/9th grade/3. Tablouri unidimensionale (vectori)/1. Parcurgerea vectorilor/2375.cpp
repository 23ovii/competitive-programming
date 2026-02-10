#include <bits/stdc++.h>
using namespace std;
bool palindrom(int n) {
    if (n < 0 || (n % 10 == 0 && n != 0)) return false;
    int inv = 0;
    while (n > inv) {
        inv = inv * 10 + n % 10;
        n /= 10;
    } if (n == inv || n == inv / 10) return true;
    else return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("palindromsd.in");
    ofstream fout("palindromsd.out");
    int n, a[1001], x, temp = 0;
    while (fin >> x) {
        if (palindrom(x)) a[temp++] = x;
    }
    int i = 0, j = temp - 1;
    if (temp == 0) {
        fout << "-1";
    } else {
    while (i <= j) {
        if (i == j) {
            fout << a[i] << " ";
        } else {
            fout << a[i] << " " << a[j] << " ";
        }
        i++, j--;
    }
}
    return 0;
}