#include <bits/stdc++.h>
using namespace std;
int main()
{
 int    n,m,a,min,i;
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 cin >> n >> m;
 min=1e9;
 for (i=0; i<n; i++)
   {
     cin >> a;
     if (a<min) min=a;
   }
 cout << min;
}