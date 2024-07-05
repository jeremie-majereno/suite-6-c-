#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s[2],w[2];
 int    d,i,j;
 for (j=0; j<2; j++)
   {
     getline(cin,s[j]);
     d=s[j].length();
     w[j]=s[j][0];
     for (i=1; i<d; i++)
       if (w[j].find(s[j][i])>d) w[j]+=s[j][i];
   }
 if (w[0].length()>w[1].length())
        cout << s[0] << " " << w[0];
   else cout << s[1] << " " << w[1];
}