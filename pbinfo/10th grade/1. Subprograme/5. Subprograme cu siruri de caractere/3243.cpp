#include <bits/stdc++.h>
using namespace std;
int Path(const char cale[], char d[101][101]) {
   int i;
   char calee[101];
   strcpy(calee, cale);
   char* folder;
   folder = strtok(calee, "\\");
   i = 0;
   while (folder != NULL) {
      strcpy(d[i], folder);
      folder = strtok(NULL, "\\");
      i++;
   }
   return i;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char cale[101];
    char d[101][101];
    cin.getline(cale, 101);
    int n = Path(cale, d);
    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << d[i] << "\n";
    }
    return 0;
}