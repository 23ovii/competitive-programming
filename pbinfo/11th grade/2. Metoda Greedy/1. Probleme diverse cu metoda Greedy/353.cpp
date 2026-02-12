#include<bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("spectacole.in");
    ofstream fout("spectacole.out");

    int n, x[101], y[101], ord, aux, nr = 0;
    fin >> n;
    for (int i = 0; i < n; i++) fin >> x[i] >> y[i];
    for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (y[i] > y[j]) {
                    aux = x[i]; x[i] = x[j]; x[j] = aux;
                    aux = y[i]; y[i] = y[j]; y[j] = aux;
                }
            }
    }
    ord = 0;
    for (int i = 0; i < n; i++) {
        if (ord <= x[i]) {
            ord = y[i];
            nr++;
        }
    } fout << nr;
    return 0;
}