#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,a;
	double sum,r;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n >> k;
	sum=0;
	for (i-0; i<n; i++)
	{
		cin >> a;
		sum +=a;
	}
	r=sum/k;
	cout << setprecision(0) << fixed;
	cout << r;
}