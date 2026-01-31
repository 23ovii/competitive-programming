#include <bits/stdc++.h>
using namespace std;
void Trim(char s[]) {
    int start = 0;
    while (s[start] == ' ') start++;
    int end = start;
    while (s[end] != '\0') end++;
    end--;
    while (end >= start && s[end] == ' ') end--;
    int i = 0;
    for (int j = start; j <= end; j++) 
        s[i++] = s[j];
    s[i] = '\0';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char s[101];
    cin.getline(s, 101);
    Trim(s);
    cout << s;
    return 0;
}