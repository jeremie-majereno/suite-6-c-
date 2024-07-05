#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,d,k;
	getline(cin,s);
	d=s.length();
	for (i=0; i<d; i++)
		if (s[i]=='n')
		cout << i+1 << endl; 
}