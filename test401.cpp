#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int d,i;
	getline(cin,a);
	getline(cin,b);
	d=a.length();
	for (i=0; i<d; i++)
		if (a[i]==b[i]) cout << 0;
	else cout << 1;
}