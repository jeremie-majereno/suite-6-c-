#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s,w;
 int    i,ds,dw;
 getline(cin,s);
 getline(cin,w);
 ds=s.length();
 dw=w.length();
 i=0;
 while ((i<dw) && (s.find(w[i])<ds))
   {
     s.erase(s.find(w[i]),1);
     i++;
   }
 if (i==dw) cout << "Yes " << s;
   else     cout << "No "  << w[i];
}