#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	char max;
	int d,i;
	getline(cin,a);
	d=a.length();
	max='0';
	for (i=0; i<d; i++)
		if (a[i]>max) max=a[i];
	cout << max;
}