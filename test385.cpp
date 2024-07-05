#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15],i,n;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
		sort(a,a+n);
	for (i=2; i<n-2; i++) cout << a[i] << endl;
}