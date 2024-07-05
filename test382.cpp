#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[9],b[6],sa,sb,i;
	for (i=0; i<9; i++) cin >> a[i];
	for (i=0; i<6; i++) cin >> b[i];
		sort(a,a+9); sort(b,b+6);
	sa=a[0]+a[1]+a[2];
	sb=b[0]+b[1]+b[2];
	if (sa<sb) cout << "Win1" << endl;
	if (sa>sb) cout << "win2" << endl;
	if (sa==sb) cout << "EQ" ;
}