#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,k1,k2,k3;
	for (i=0; i<10; i++) cin >> a[i];
	cin >> k1 >> k2 >> k3;
		sort (a,a+10);
	cout << a[k1-1] << endl;
	cout << a[k2-1] << endl;
	cout << a[k3-1];


}