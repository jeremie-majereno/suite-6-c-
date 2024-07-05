#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,p;
	int d,i;
	getline(cin,s);
	getline(cin,p);
	d=s.length();
	i=0;
	while ((i<d) &&(s[i]!=p[i])) i++;
	if (i==d) cout << "YES";
	else cout << "NO " << i+1;
}