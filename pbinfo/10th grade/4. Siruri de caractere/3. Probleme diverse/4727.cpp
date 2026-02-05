#include<iostream>
#include<cstring>
using namespace std;

bool palindrom(char p[]) {
    int i = 0, j = strlen(p) - 1;
    while (i < j) {
        if (p[i] != p[j])
            return false;
        i++; j--;
    }
    return true;
}
int main() {
    int aparitii[256] = {0}, cuvunice = 0;
    char s[256], *p, cuv_pal[256][256];
    cin.getline(s, 256);
    p = strtok(s, " ");
    while(p) {
        if(palindrom(p)) {
            bool gasit = false;
            for (int i = 0; i < cuvunice; i++) {
                if(strcmp(cuv_pal[i], p) == 0) {
                    aparitii[i]++;
                    gasit = true;
                    break;
                }
            }
            if(!gasit) {
                strcpy(cuv_pal[cuvunice], p);
                aparitii[cuvunice] = 1;
                cuvunice++;
            }
        }
        p = strtok(NULL, " ");
    }
    if (cuvunice == 0) {
        cout << "nu exista";
        return 0;
    } else {
    for(int i = 0; i < cuvunice; i++) {
            for(int j = 0; j < cuvunice; j++) {
            if(strcmp(cuv_pal[i], cuv_pal[j]) < 0) {
                char aux[256];
                strcpy(aux, cuv_pal[i]);
                strcpy(cuv_pal[i], cuv_pal[j]);
                strcpy(cuv_pal[j], aux);
                swap(aparitii[i], aparitii[j]);
            }
        }
    }
    for(int i = 0; i < cuvunice; i++) {
            cout << cuv_pal[i] << " " << aparitii[i] << "\n";
        }
    }
return 0;
}