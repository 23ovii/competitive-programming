#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double grade;
    cin >> grade;
    double pi = acos(-1);
    double rad = grade * pi / 180;
    cout << fixed << setprecision(3);
    cout << sin(rad) << " " << cos(rad);
    return 0;
}