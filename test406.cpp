#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int d,i;
	cin >> a;
	d=a.length();
	for (i=0; i<d; i++)
		a[i]=tolower(a[i]);
	cout << a;
}