#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,x,y,z,n,min;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n;
	min=1e9;
	for (i=0; i<n-1; i++)
	{
		cin >> x >> y >> z;
		if ((x==1) && (z<min)) min=z;

	}
	cout << min ;
}