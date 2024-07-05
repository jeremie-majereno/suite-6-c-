#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[12],i;
	for (i=0; i<12; i++) cin >> a[i];
		sort(a,a+12) ; reverse (a,a+12);
	cout << a[0]+a[3]+a[6]+a[9] << endl;
    cout << a[1]+a[4]+a[7]+a[10] << endl;
    cout << a[2]+a[5]+a[8]+a[11] ;
}   
