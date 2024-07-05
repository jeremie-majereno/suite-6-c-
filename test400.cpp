#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	int d,i,p;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	d=a.length();
	p=0;
	for (i=0; i<d; i++)
		if (((a[i]=='+') && (b[i]=='+') && (c[i]='-')) || 
			((a[i]=='-') && (b[i]=='+') && (c[i]='+')) || 
			((a[i]=='+') && (b[i]=='-') && (c[i]='+')))  p++;
	cout << p;

}