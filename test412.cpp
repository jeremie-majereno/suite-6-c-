#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,d,i,j,kol,p;
	cin >> n >> d; getline(cin,s);
	kol=0; p=0;
	for (i=0; i<n; i++)
	{
		getline(cin,s);
		for (j=0; j<d; j++)
			`	{
				if (s[j]=='#') kol++;
				if (s[j]=='@') p++;
			}
	}
   cout << kol << " " << p;
}