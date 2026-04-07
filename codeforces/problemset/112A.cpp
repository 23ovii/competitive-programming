#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char s[101], s1[101];
    cin.getline(s, 101);
    cin.getline(s1, 101);
    if (strcasecmp(s, s1) > 0) {
        cout << 1;
    } else if (strcasecmp(s, s1) < 0) {
        cout << -1;
    } else {
        cout << 0;
    }
    return 0;
}