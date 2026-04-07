#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char name[101];
    int visited[256] = {}, distinct = 0;
    cin.getline(name, 101);
    for (int i = 0; i < strlen(name); i++) {
        if (visited[name[i]] == 0) {
            distinct++;
            visited[name[i]] = 1;
        }
    } if (distinct % 2 != 0) {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }
    return 0;
}