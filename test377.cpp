#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],i,n,n1,n2;
    cin >> n;
    for (i=0; i<n; i++) cin >> a[i];
    	sort(a,a+n);
    n1=a[n-1]+a[n-2]+a[n-3];
    n2=a[0]+a[1]+a[2];
    cout << n1 << endl;
    cout << n2;
}