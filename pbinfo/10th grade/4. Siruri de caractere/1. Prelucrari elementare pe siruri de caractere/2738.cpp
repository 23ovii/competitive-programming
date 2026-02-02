#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char s[256], *p, max[256] = {0};
    cin.getline(s, 256);
    p = strtok(s, " ");
    while (p) {
        char found[256]={0};
        int temp = 0;
        bool ok = 1;
        for (int i = 0; i < strlen(p) && ok; i++) {
            if (strchr(found, p[i])) {
                ok = 0;
            } 
            found[temp++] = p[i];
        }
        if (ok && strlen(p) > strlen(max)) strcpy(max, p);
        p = strtok(NULL, " ");
    }
    if(strlen(max)) cout << max;
    else cout << "-1";
    return 0;
}