#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int count = 0;
    a = ((a + 9) / 10) * 10;
    for (int i = a; i <= b; i += 10) {
        count++;
    }
    cout << count << endl;
    return 0;
}