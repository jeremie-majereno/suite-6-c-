#include <bits/stdc++.h>
using namespace std;
int main() 
{
	string s ;
	char c;
	int d,i;
	getline (cin,s);
	d=s.length();
	for (i=0; i<d-3; i=i+4)
	{
		c     = s[i+3];
	    s[i+3]= s[i+2];
		s[i+2]=s[i+1] ;
		s[i+1]=s[i];
		s[i]  = c;
	
	}
	cout << s;
}