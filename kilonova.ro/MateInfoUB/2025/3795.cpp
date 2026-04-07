#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, sate_impare = 0, sate_pare = 0;
    cin >> n;    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != 0) {
            sate_impare++;
        } else {
            sate_pare++;
        }
    }
    if (sate_impare % 2 == 0) {
        cout << "egalitate\n";
    } else {
        if (sate_impare % 4 == 1) {
            cout << "Radu\n";
        } else { 
            if (sate_pare % 2 == 0) {
                cout << "Mircea\n";
            } else {
                cout << "Radu\n";
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}