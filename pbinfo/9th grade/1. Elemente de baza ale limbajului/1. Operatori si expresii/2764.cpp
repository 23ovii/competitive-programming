#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, g, b;
    cin >> r >> g >> b;
    cout << (255 - r) % 1000 << " " << (255 - g) % 1000 << " " << (255 - b) % 1000 << "\n";
    return 0;
}