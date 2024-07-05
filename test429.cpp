#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,d;
	char x;
	getline(cin,s);
	cin >> x;
	d=s.length();
	for (i=0; i<d; i++)
		if (s[i]!=x) cout << s[i];
}