#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double r, pi;
    cin >> r;
    pi = 3.14159265359;
    cout << fixed << setprecision(10) << (double) pi * pow(r, 2) << " ";
    cout << fixed << setprecision(10) << (double) 2 * pi * r << endl; 
    return 0;
}