#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int d,i,balans;
	getline(cin,s);
	d=s.length();
	balans=0;
	for (i=0; i<d; i++)
	{
	     if (s[i]=='(') balans++;
		else balans--;
		cout << balans << " ";
	}
} 