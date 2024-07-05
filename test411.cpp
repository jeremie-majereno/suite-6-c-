#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 int    i,d,n,j,balans;
 cin >> n; getline(cin,s);
 for (j=0; j<n; j++)
   {
     getline(cin,s);
     d=s.length();
     balans=0;
     i=0;
     while ((i<d) && (balans>=0))
       {
         if (s[i]=='(') balans++;
           else         balans--;
         i++;
       }
     if (balans==0) cout << "Good" << endl;
       else         cout << "Bad"  << endl;
   }
}