#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 int    d,i;
 getline(cin,s);
 sort(s.begin(),s.end());
 d=s.length();
 cout << s[d-2] << s[d-1];
 for (i=0; i<d-2; i++) cout << s[i];
}