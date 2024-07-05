#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,d;
	getline(cin,s);
	cout << s;
	d=s.length();
	for (i=d-1; i>0; i--)
		cout << s[i] << "*";
		cout << s[0];
}