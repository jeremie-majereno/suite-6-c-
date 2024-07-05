#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s,r;
 int i,d;
 getline(cin,s);
 s+='_';
 d=s.length();
 r="";
 for (i=0; i<d; i++)
   if (s[i]==s[i+1]) r+=s[i];
     else if (r!="")
            {
              r+=s[i];
              cout << r << r;
              r="";
            }
}