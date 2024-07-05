#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int d,a,i,k;
	char x;
	getline(cin,s);
	cin >> x;
	d=s.length();
	k=0;
	for (i=0; i<d; i++)
		if (s[i]==x) k++;
	cout << k;

}