#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s[16];
	int i,n,m,c,l,h,r;
	cin >> n >> m;
	for (i=0; i<n; i++) cin >> s[i];
		cin >> r >> c >> l >> h;
	for (i=r-1; i<r-1+h; i++)
		cout << s[i].substr(c-1,l) << endl ;
}