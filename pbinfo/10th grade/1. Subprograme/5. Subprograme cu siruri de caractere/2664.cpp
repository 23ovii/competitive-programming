#include <bits/stdc++.h>
using namespace std;
int IndexOf(char s[], char ch) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ch) {
            return i;
        }
    } return -1;
}
int LastIndexOf(char s[], char ch) {
    for (int i = strlen(s); i > 0; i--) {
        if (s[i] == ch) {
            return i;
        }
    } return -1;
}
int NthIndex(char s[], char ch, int k) {
    int aux = -1;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ch && k) {
            k--;
            aux = i;
        }
    } return aux;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char s[256], ch;
    cin.getline(s, 256); cin.get(ch);
    int n = IndexOf(s, ch);
    cout << n << "\n";
    int m = LastIndexOf(s, ch);
    cout << m << "\n";
    int p = NthIndex(s, ch, 2);
    cout << p << "\n";
    return 0;
}