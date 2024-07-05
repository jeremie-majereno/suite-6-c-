#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,w;
	int d,i;
	getline(cin,s);
	d=s.length();
	w=s[0];
	for(i=0; i<d; i++)
		if (w.find(s[i])>d) w+=s[i];
	if (s==w) cout << "no";
	else cout << "yes";

}