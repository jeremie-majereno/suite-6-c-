#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n;
	for (i=1; i<=n; i++)
		if (n%i==0) cout << i << " ";
}