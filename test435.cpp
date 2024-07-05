#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s,t;
 int    n,i;
 cin >> n; getline(cin,s);
 t="";
 for (i=0; i<n; i++)
   {
     getline(cin,s);
     if (s[0]=='B') t=s[2]+t;
       else t+=s[2];
   }
 cout << t;
}