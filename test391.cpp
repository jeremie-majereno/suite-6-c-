#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s,x,r;
 int i,ds,dx,dr;
 getline(cin,s);
 ds=s.length();
 x="12abc,."; dx=x.length();
 r="";
 for (i=0; i<ds; i++)
   if (x.find(s[i])>dx) r+=s[i];
 dr=r.length();
 for (i=dr-1; i>-1; i--)
   cout << r[i];
}