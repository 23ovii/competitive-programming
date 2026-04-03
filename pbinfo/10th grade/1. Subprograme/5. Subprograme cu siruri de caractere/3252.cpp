#include <bits/stdc++.h>
using namespace std;
void Alphanum(char s[], char cuv[][21], int &n, int num[], int &m) {
    n = m = 0;
    char *aux;
    aux = strtok(s, " ");
    while (aux != NULL) {
        if (aux[0] >= '0' && aux[0] <= '9') {
            num[m++] = atoi(aux);
        } else {
            strcpy(cuv[n++], aux);
        }
        aux = strtok(NULL, " ");
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char s[101];
    char cuv[101][21];
    int num[101];
    int n, m;
    cin.getline(s, 101);
    Alphanum(s, cuv, n, num, m);
    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << cuv[i] << "\n";
    }
    cout << m << "\n";
    for (int i = 0; i < m; i++) {
        cout << num[i] << "\n";
    }
    return 0;
}