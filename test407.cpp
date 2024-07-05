#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,p;
	int d1,d2,i;
	getline (cin,s);
	getline (cin,p);
	d1=s.length();
	d2=p.length();
	i=0; 
	while((i<d1) && (i<d2) && (s[i]==p[i])) i++;
	cout << s.substr(0,i);
}