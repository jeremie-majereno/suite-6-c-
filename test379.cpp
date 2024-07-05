#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[12],b[8],i,a1,b1;
	for (i=0; i<12; i++) cin >> a[i];
	for (i=0; i<8; i++) cin >> b[i];
		sort(a,a+12); reverse(a,a+12);
	    sort(b,b+8); reverse(b,b+8);
	 for (i=0; i<3; i++) a1+=a[i];
	 for (i=0; i<3; i++) b1+=b[i];
	 	cout << a1 << endl;
	    cout << b1 ;
}