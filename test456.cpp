#include <bits/stdc++.h>
using namespace std;
int main()
{
 int    n,a,max,i,e;
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 cin >> n >> e >> e;
 max=0;
 for (i=0; i<n; i++)
   {
     cin >> a;
     if (a>max) max=a;
   }
 cout << max;
}