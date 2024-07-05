#include <bits/stdc++.h>
using namespace std;
int main()
{
 string t[4],s;
 int    i,j,d;
 getline(cin,s);
 d=s.length();
 for (j=0; j<4; j++) t[j]="";
 for (i=0; i<d; i+=4)
   for (j=0; j<4; j++) {t[j]+=s[i+j];};
 for (j=0; j<4; j++) cout << t[j] << endl;
}