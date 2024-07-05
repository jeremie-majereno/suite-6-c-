#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k;
	char c;
	cin >> n;
	for (i=1; i<=n; i++)
	{
		cin >> k >> c;
		if (k) for (j=0; j<k; j++) cout << c;
		else cout << endl; 
	}
}