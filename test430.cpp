#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,w;
	int i,d;
	getline(cin,s);
	d=s.length();
	w=s[0];
	for (i=0; i<d; i++)
		if (w.find(s[i])>d) w+=s[i];
	cout << w.length();
}