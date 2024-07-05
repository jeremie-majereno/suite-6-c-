#include <bits/stdc++.h>
using namespace std;
int main()
{
 string t[4],s;
 int    i,j,d;
 getline(cin,s);
 d=s.length();
 s[d-1]=' ';
 j=0; t[0]="";
 for (i=0; i<d; i++)
   if (s[i]!=' ') t[j]+=s[i];
     else         {j++; t[j]="";};
 for (j=0; j<3; j++)
   cout << t[j] << endl;
}