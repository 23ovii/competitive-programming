#include <bits/stdc++.h>
#include <utility>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, div[1001], nr = 0;
    cin >> n;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            div[nr++] = i;
            if (n / i != i) div[nr++] = n / i;
        }
    }
    for (int i = 1; i < nr; i++) {
        for (int j = 1; j <= nr - 1; j++) {
            if (div[j] > div[j + 1]) {
                int aux = div[j];
                div[j] = div[j + 1];
                div[j + 1] = aux;
            }
        }
    }
    bool ok = 0;
    for (int i = 1; i < nr; i++) {
        for (int j = i + 1; j < nr; j++) {
            for (int k = j + 1; k < nr; k++) {
                if (div[i] + div[j] + div[k] == n) {
                    ok = 1;
                    cout << div[i] << " " << div[j] << " " << div[k] << "\n";
                }
            }
        }
    }
    if (ok == 0) {
        cout << "nu exista";
    }
    return 0;
}
