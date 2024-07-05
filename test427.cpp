#include <bits/stdc++.h>
using namespace std;
int main()
{
	string x,s;
	int i,d;
	getline(cin,s);
	x="*-+!()";
	d=s.length();
	for (i=0; i<d ; i++)
		if (x.find(s[i])>5) cout << s[i]; 

}
