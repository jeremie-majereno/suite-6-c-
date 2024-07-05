#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[9],b[6],i,sa,sb;
	for (i=0; i<9; i++) cin >> a[i];
	for (i=0; i<6; i++) cin >> b[i];
		sort(a,a+9); 
	    sort(b,b+6); 
	sa=a[8]+a[7];
	sb=b[5]+b[4];
	if (sa>sb) cout << "WinaA" << endl;
	if (sa<sb) cout << "WinB" << endl;
	if (sa==sb) cout << "Dranw" ;
}