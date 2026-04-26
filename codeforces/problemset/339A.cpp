#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int ones = 0, twos = 0, threes = 0;
    if (s.size() == 1) {
        cout << s;
        return 0;
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            ones++;
        } else if (s[i] == '2') {
            twos++;
        } else if (s[i] == '3') {
            threes++;
        }
    }
    for (int i = 0; i < ones; i++) {
        if (i == ones - 1 && twos == 0 && threes == 0) {
            cout << "1";
        } else {
        cout << "1+";
        }
    }
    for (int i = 0; i < twos; i++) {
        if (i == twos - 1 && threes == 0) {
            cout << "2";
        } else {
            cout << "2+";
        }
    }
    for (int i = 0; i < threes; i++) {
        if (i == threes - 1) {
            cout << "3";
        } else {
            cout << "3+";
        }
    }
    return 0;
}