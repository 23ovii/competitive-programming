#include <bits/stdc++.h>
using namespace std;
void UpperLower(const char a[], char U[], char L[]) {
    int temp = 0;
    for (int i = 0; a[i]; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            U[temp] = a[i] - 32;
        } else {
            U[temp] = a[i];
        } if (a[i] >= 'A' && a[i] <= 'Z') {
            L[temp] = a[i] + 32;
        } else {
            L[temp] = a[i];
        }
        temp++;
    }
    U[temp] = '\0'; L[temp] = '\0';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char a[100], U[100], L[100];
    cin.getline(a, 100);
    UpperLower(a, U, L);
    cout << U << "\n" << L << "\n";
    return 0;
}