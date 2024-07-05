#include <bits/stdc++.h>
using namespace std;
int main()
{
 int    n,a,b,k,i;
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 cin >> n;
 cin >> a;
 k=0;
 for (i=0; i<n-1; i++)
   {
     cin >> b;
     if (b!=a) k++;
   }
 cout << k;
}