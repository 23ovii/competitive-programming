#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char s[256];
    cin.getline(s, 256);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        int j = i + 1;
        while (j < len && tolower(s[i]) == tolower(s[j])) {
            j++;
        }

        if (j > i + 1) {
            int k = i;
            for (int l = j; l < len; l++) {
                s[k++] = s[l];
            }
            len -= (j - i);
            i = -1;
        }
    }
    s[len] = '\0';
    cout << s;
    return 0;
}
