#include <bits/stdc++.h>
using namespace std;
int main()
{
	string t,s,w;
	int i,j,d,max,k;
	getline(cin,s);
	s+=' ';
	d=s.length();
	max=0;
	  t="";
	for (i=0; i<d; i++)
		if (s[i]!=' ') t+=s[i];
	else {
		k=t.length();
		if (k>max) {max=k; w=t;};
		t="";
	};
	cout << w;

}