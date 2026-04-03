#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    char s[100][256];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < strlen(s[i]); j++) {
            int len = strlen(s[i]);
            if(len > 10) {
                cout << s[i][0] << len-2 << s[i][len-1] << endl;
                break;
            } else {
                cout << s[i] << endl;
                break;
            }
        }
    }
    return 0;
}