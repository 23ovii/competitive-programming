#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    int sticla = 0;
    int temp = x;
    while (x < y) {
        x += temp;
        sticla++;
    } sticla++;
    cout << sticla;
    return 0;
}