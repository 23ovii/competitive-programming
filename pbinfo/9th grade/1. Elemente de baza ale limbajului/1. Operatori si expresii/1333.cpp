#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long double B, b, l;
    cin>>B>>b>>l;
    long double h = sqrt (pow(l,2) - pow((B-b)/2,2) );
    long double bt = b + (B-b)/2;
    long double d = sqrt (pow(h,2) + pow(bt,2));
    cout << d << "\n";
    return 0;
}