#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s[5],t;
	int i,n;
	cin >> t;
	cin >> n ;getline(cin,s[0]);
	for (i=0; i<n; i++) getline(cin,s[i]);
		i=0;
	while ((i<n) && (s[i]!=t)) i++;
	if (i==n) cout << "no";
	else cout << i+1;
}