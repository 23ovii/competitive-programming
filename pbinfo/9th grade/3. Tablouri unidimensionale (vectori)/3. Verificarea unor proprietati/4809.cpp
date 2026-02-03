#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long maxim = -1;
    int c = 0;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if(x > maxim) {
            c++;
            maxim = x;
        }
    }
    cout << c << "\n";
    return 0;
}