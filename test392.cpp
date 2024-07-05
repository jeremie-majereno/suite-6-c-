#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s,r;
 int i,d;
 getline(cin,s);
 d=s.length();
 r="";
 for (i=d-3; i<d;   i++) r+=s[i];
 for (i=0;   i<d-3; i++) r+=s[i];
 for (i=d-1; i>-1;  i--) cout <<r[i];
}