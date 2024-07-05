#include <bits/stdc++.h>
using namespace std;
int main()
{
 int    n,a1,a2,k,i;
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 cin >> n >> n;
 cin >> a1;
 k=0;
 for (i=0; i<n-1; i++)
   {
     cin >> a2;
     if (abs(a2-a1)==1) k++;
     a1=a2;
   }
 cout << k;
}