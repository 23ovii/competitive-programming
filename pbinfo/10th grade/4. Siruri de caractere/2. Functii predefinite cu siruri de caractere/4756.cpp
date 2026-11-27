#include <bits/stdc++.h>
using namespace std;
char sep[]=" .,!?:;-";
ifstream fin("textcuv.in");
ofstream fout("textcuv.out");
void t1(char s[1005]) {
    int nr = 0;
    char *p, cuv[1005][1005];
    p = strtok(s, sep);
    while (p) {
        strcpy(cuv[nr++], p);
        p = strtok(NULL, sep);
    }
    fout << nr << "\n";
    for (int i = 0; i < nr; i++) {
        fout << cuv[i] << "\n";
    }
}
void t2 (char s[1005]) {
    char temp[1005], *p;
    p = strtok(s, sep);
    strcpy(temp, p);
    while (p) {
        if (strcmp(p, temp) < 0) {
            strcpy(temp, p);
        }
        p = strtok(NULL, sep);
    }
    fout << temp;
}
void t3 (char s[1005]) {
    int nr = 0;
    char *p;
    p = strtok(s, sep);
    while (p) {
        if (strstr(p, "ini") != 0) {
            nr++;
        }
        p = strtok(NULL, sep);
    }
    fout << nr;
}
void t4 (char s[1005]) {
    char *p;
    p = strtok(s, sep);
    while (p) {
        int len = strlen(p);
        for (int i = len - 1; i >= 0; i--) {
            fout << p[i];
        }
        fout << "\n";
        p = strtok(NULL, sep);
    }
}
void t5 (char s[1005]) {
    char *p;
    int nr = 0;
    p = strtok(s, sep);
    while (p) {
        int len = strlen(p);
        if (p[len - 1] == 'a') nr++;
        p = strtok(NULL, sep);
    }
    fout << nr;
}
void t6 (char s[1005]) {
    char *p;
    int max = -99999, min = 99999;
    p = strtok(s, sep);
    while (p) {
        int len = strlen(p);
        if (len > max) max = len;
        if (len < min) min = len;
        p = strtok(NULL, sep);
    }
    fout << min << " " << max;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    char s[1005], *p;
    fin >> t; fin.get();
    fin.get(s, 1005);
    if (t == 1) t1(s);
    else if (t == 2) t2(s);
    else if (t == 3) t3(s);
    else if (t == 4) t4(s);
    else if (t == 5) t5(s);
    else t6(s);
    return 0;
}
