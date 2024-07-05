#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,d,k,j,n;
	cin >> n;getline(cin,s);
	for(i=0; i<n; i++)
	{
		getline(cin,s);
		d=s.length();
		k=0;
		for(j=0; j<d; j++)
			if (s[j]=='#') k++;
		cout << k << endl;
	}
}