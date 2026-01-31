#include <bits/stdc++.h>
using namespace std;
void FConcat(char s[], char d[]) {
    int j = 0;
    while(s[j] != '\0') {
        j++;
    }
    int i = 0;
    while(d[i] != '\0') {
        s[j++] = d[i++];
    }
    s[j] = '\0';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char s[101], d[101];
    cin.getline(s, 101);
    cin.getline(d, 101);
    FConcat(s, d);
    cout << s;
    return 0;
}