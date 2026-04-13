#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int u = n % 10;
    int s = n / 100 % 10;
    int temp = s * 10 + u;
    cout << temp * temp;
    return 0;
}