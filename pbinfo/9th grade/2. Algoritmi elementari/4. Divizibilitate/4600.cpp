#include <bits/stdc++.h>
using namespace std;
int div(int a) {
    int divp = 0, divi = 0;
    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            int j = a / i;
            if (i % 2 == 0) divp++;
            if (i % 2 != 0) divi++;
            if (j != i) {
                if (j % 2 == 0) divp++;
                if (j % 2 != 0) divi++;
            }
        }
    }
    return divp == divi;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, suma = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (div(i) == 1) suma += i;
    }
    cout << suma;
    return 0;
}
