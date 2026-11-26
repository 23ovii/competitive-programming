// la liceu
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char x[1001], y[1001], *p, *pp, xc[1001][21], yc[1001][21];
    int nr = 0, cx = 0, cy = 0;
    cin.getline(x, 1001);
    cin.getline(y, 1001);
    p = strtok(x, ".,!?:; ");
    while (p != 0) {
        strcpy(xc[cx++], p);
        p = strtok(NULL, ".,!?:; ");
    }
    pp = strtok(y, ".,!?:; ");
    while (pp != 0) {
        strcpy(yc[cy++], pp);
        pp = strtok(NULL, ".,!?:; ");
    }
    for (int i = 0; i < cx; i++) {
            bool gasit = 0;
        for (int j = 0; j < cy; j++) {
            if (strncmp(yc[j], xc[i], strlen(xc[i])) == 0) {
                    gasit = 1;
            }
        }
        if (gasit) nr++;
    }
    cout << nr;
}
