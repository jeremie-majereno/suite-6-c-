#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,x;
	int i,d;
	getline(cin,s);
	x="0123456789";
	d=s.length();
	for (i=0; i<d; i++)
		if (x.find(s[i])>10)
			cout << s[i];
}