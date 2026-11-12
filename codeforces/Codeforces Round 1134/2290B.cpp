#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, count = 0;
    cin >> n;
    cin.get();
    char s[256];
    cin.getline(s, 256);
    if (s[0] == 'B') count++;
    for (int i = 0; i < strlen(s) - 1; i++) {
        if (s[i] == 'B' && s[i + 1] != 'R') {
            count++;
        }
        else if (s[i] == 'R' && s[i + 1] !=  'B') {
            count++;

        }
    }
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
