#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s , w;
	int i,ds,dw;
	getline(cin,s);
	getline(cin,w);
	ds=s.length();
	dw=w.length();
	for (i=0; i<dw; i++)
		if(s.find(w[i])<ds) s.erase(s.find(w[i]),1);
	cout << s;
}