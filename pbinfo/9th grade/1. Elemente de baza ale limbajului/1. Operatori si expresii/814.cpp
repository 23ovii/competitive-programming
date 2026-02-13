#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, triplu, val;
    cin >> x >> y;
    triplu = y * 3;
    val = triplu - x;
    cout << val;
    return 0;
}