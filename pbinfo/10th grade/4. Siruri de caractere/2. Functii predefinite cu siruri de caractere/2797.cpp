#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char s[101], *p, maxim[101] = "";
    bool exista = false;
    cin.getline(s, 101);
    p = strtok(s, " ");
    while (p) {
        if (p[0] >= '0' && p[0] <= '9') {
            if (!exista || p[0] > maxim[0]) {
                strcpy(maxim, p);
                exista = true;
            }
        }
        p = strtok(NULL, " ");
    }
    if (exista) cout << maxim;
    else cout << "nu exista";
    return 0;
}
