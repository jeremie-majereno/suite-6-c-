#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p[1000],c,i,k,m,n,s,f;
	freopen("input","r",stdin);
	freopen("output","w",stdout);
	cin >> n >> m >> k;
	for (i=1; i<n; i++) p[i]=0;
		for (i=0; i<n; i++)
		{
			cin >> s;
			p[s]=1;
		}
	for (i=0; i<n; i++) cin >> c;
		cin >> f ;
	p[f]=1;
	cout << n-m-1 << endl;
	for (i=1; i<=n; i++)
		if (p[i]==0) cout << i << " ";
}