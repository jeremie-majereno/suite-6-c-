#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s,r;
 int i,d;
 getline(cin,s);
 d=s.length();
 r="";
 for (i=0; i<d; i++)
   if ((s[i]>='0') && (s[i]<='9')) r+=s[i];
 d=r.length();
 for (i=0; i<d-1; i++) cout << r[i] << "+";
 cout << r[d-1];
}