#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,j,i,k;
	cin >> n;
	s="";
	for (i=1; i<=n; ++i)
	{
		cin >> k;
		if (i%2) for (j=0; j<k; j++) s='1'+s;
		else     for (j=0; j<k; j++) s='0'+s;
	}
	cout << s;
}