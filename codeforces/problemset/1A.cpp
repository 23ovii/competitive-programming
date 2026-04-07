#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a;
    cin >> n >> m >> a;
    long long paven = (n + a - 1) / a;
    long long pavem = (m + a - 1) / a;
    long long result = paven * pavem;
    cout << result;
    return 0;
}