#include <bits/stdc++.h>
using namespace std;
int FBaza(const char s[]) {
    bool binare = 1, sub4 = 1, sub8 = 1, zecimale = 1, zecimalelit = 1;
    for (int i = 0; i < strlen(s); i++) {
        if(strchr("01", s[i]) == 0) binare = 0;
        if(strchr("0123", s[i]) == 0) sub4 = 0;
        if(strchr("01234567", s[i]) == 0) sub8 = 0;
        if(strchr("0123456789", s[i]) == 0) zecimale = 0;
        if(strchr("0123456789abcdefABCDEF", s[i]) == 0) zecimalelit = 0;
    } if(binare) return 2;
    else if(sub4) return 4;
    else if(sub8) return 8;
    else if(zecimale) return 10;
    else if(zecimalelit) return 16;
    else return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char s[101];
    cin.getline(s, 101);
    cout << FBaza(s);
    return 0;
}