#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,max,min,i;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> m >> n;
	max=0;
	for (i=0; i<m ;i++)
	{
		cin >> a;
		if (a>max) max=a;
	}
	min =1e9;
	for (i=0; i<n; i++)
	{
		cin >> a;
		if (a<min) min =a;
	}
	cout << max << " " << min;
}