#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],n,i;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
		sort(a,a+n);
	for (i=1; i<n-1; i++) cout << a[i]; 
}