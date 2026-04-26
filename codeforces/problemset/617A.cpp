#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    int count = 0;
    while (x) {
        if (x >= 5) {
            x -= 5;
            count++;
        } else if (x >= 4) {
            x -= 4;
            count++;
        } else if (x >= 3) {
            x -= 3;
            count++;
        } else if (x >= 2) {
            x -= 2;
            count++;
        } else if (x >= 1) {
            x -= 1;
            count++;
        }
    }
    cout << count;
    return 0;
}