#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("muzical.in");
    ofstream fout("muzical.out");

    int suma = 0, n;
    char s[256];
    fin >> n;
    fin.get();
    for (int i = 0; i < n; i++) {
        fin >> s;
        if (strstr(s, "re") != 0) suma += 1;
        if (strstr(s, "mi") != 0) suma += 2;
        if (strstr(s, "fa") != 0) suma += 3;
        if (strstr(s, "sol") != 0) suma += 4;
        if (strstr(s, "la") != 0) suma += 5;
        if (strstr(s, "si") != 0) suma += 6;
        if (strstr(s, "do2") != 0) suma += 7;
    }
    int temp = suma % 8;
    if (temp == 0) fout << "do1";
    else if (temp == 1) fout << "re";
    else if (temp == 2) fout << "mi";
    else if (temp == 3) fout << "fa";
    else if (temp == 4) fout << "sol";
    else if (temp == 5) fout << "la";
    else if (temp == 6) fout << "si";
    else fout << "do2";
    return 0;
}
