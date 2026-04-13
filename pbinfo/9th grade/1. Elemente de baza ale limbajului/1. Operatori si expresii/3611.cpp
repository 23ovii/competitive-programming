#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    int suma =
    100*a + 10*b + c +
    100*a + 10*c + b +
    100*b + 10*a + c +
    100*b + 10*c + a +
    100*c + 10*a + b +
    100*c + 10*b + a;
    cout << suma;
    return 0;
}