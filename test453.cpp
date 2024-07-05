#include <bits/stdc++.h>
using namespace std;
int main()
{
 int    n,m,i,a,sum;
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 cin >> n >> m;
 sum=0;
 for (i=0; i<n+m; i++)
   {
     cin >> a;
     sum+=a;
   }
 cout << sum;
}