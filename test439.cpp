#include <bits/stdc++.h>
using namespace std;
int main() 
{
	string s ;
	char c;
	int d,i;
	getline (cin,s);
	d=s.length();
	for (i=0; i<d-2; i=i+3)
	{
		c     = s[i];
	    s[i]  = s[i+1];
		s[i+1]=s[i+2] ;
		s[i+2]=c;
	
	}
	cout << s;
}