#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,d;
	getline(cin,s);
	d=s.length();
	i=0;
	while ((i<d) &&(s[i]!=' ')) i++;
	i++;
	while ((i<d) && (s[i]!=' '))
		{cout << s[i]; i++; }

}