#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	int da,p,i;
	getline(cin,a);
	getline(cin,b);
	da=a.length();
	p=0;
	for (i=0; i<da; i++)
		if (((a[i]=='+') && (b[i]=='-')) || ((a[i]=='-') && (b[i]=='+'))) p++;
	cout << p;
	
}