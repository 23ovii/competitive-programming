#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("nr.in");
    ofstream fout("nr.out");
    int n,i,max=-99999,v[256];
    f>>n;
    for(i=1;i<=n;i++)
     f>>v[i];
     for(i=1;i<=n;i++)
     if(v[i]>max)
     max=v[i];
     fout<<max;
     return 0;
}
