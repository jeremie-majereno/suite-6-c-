#include <bits/stdc++.h>
using namespace std;
int main()
{
	string t,s,w;
	int i,j,d,min,k;
	getline(cin,s);
	s+=' ';
	d=s.length();
	min=d;
	  t="";
	for (i=0; i<d; i++)
		if (s[i]!=' ') t+=s[i];
	else {
		k=t.length();
		if (k<min) {min=k; w=t;};
		t="";
	};
	cout << w;

}