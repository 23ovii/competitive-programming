#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, e, b, nre, nrb;
    cin >> n >> m >> e >> b;
    nrb=(e + m * b) / abs(m - n);
    nre=n * nrb + e;
    cout <<nre << "\n" << nrb;
    return 0;
}