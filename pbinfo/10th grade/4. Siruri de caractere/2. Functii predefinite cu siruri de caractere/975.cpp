#include <bits/stdc++.h>
using namespace std;
bool palindrom(char s[]){
    int len = strlen(s);
    for(int i = 0; i < len / 2; i++){
        if(s[i] != s[len - 1 - i]) return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char *p, s[256], lex[256] = "";
    cin.getline(s, 256);
    p = strtok(s, " ,.");
    while (p != NULL) {
        if(palindrom(p) && (strcmp(p, lex) < 0 || strlen(lex) == 0)){
            strcpy(lex, p);
        }
        p = strtok(NULL, " ,.");
    }
    if(strlen(lex)) cout << lex;
    else cout << "IMPOSIBIL";
    return 0;
}