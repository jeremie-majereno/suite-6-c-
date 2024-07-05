#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,d,k;
	getline(cin,s);
	d=s.length();
	k=0;
	for (i=0; i<d; i++)
	if ((s[i]=='a') || (s[i]=='A')) k++;
	cout << k; 
}