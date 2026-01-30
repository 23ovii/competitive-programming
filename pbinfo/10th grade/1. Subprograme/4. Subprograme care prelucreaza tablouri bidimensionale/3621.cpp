#include <bits/stdc++.h>
using namespace std;
int FMBSorted(int a[2001][2001], int n) {
    int maxCount = 0;
    int j = n;
    for (int i = 1; i <= n; i++) {
        while (j >= 1 && a[i][j] == 1) {
            j--;
        }
        int onesInRow = n - j;
        if (onesInRow > maxCount) maxCount = onesInRow;
    }
    return maxCount;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    static int a[2001][2001]; 
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
        cin >> a[i][j];
        }
    }
    cout << FMBSorted(a, n);
    return 0;
}