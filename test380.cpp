#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i;
	for (i=0 ; i<10 ; i++) cin >> a[i];
		sort(a,a+10);
	   cout << a[0]+a[9] << endl;
	   cout << a[1]+a[8] << endl;
	   cout << a[2]+a[7] << endl;
	   cout << a[3]+a[6] << endl;
	   cout << a[4]+a[5]; 
}