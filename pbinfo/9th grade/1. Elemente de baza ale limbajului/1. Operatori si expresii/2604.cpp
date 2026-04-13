#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int temp = n % 10 * 10 + n / 10;
    cout << temp;
    return 0;
}