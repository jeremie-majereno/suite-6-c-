#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	int i,j,d,b,e;
	getline(cin,s);
	d=s.length();
	s[d-1]=',' ; t="" ; b=0;
	for (i=1; i<d; i++)
	{
		if (isdigit(s[i])) t+=s[i];
		if (s[i]=='-') {b=atoi(t.c_str()) ; t="";};
		if (s[i]==',') {
			if (b==0) {cout << t << endl ; t="";}
			else {
				    e=atoi(t.c_str());
				    for (j=b; j<=e; j++) cout << j << endl;
				    	t=""; b=0;
			}
		}
		
	} 
}