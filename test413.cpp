#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int n,c,i,k;
	cin >> n >> c; 
	k=0;
	for (i=1; i<=n; i++)
	{
		cout << i;
		if ((i<10) && (i==c)) k++;
		if (i>=10)
		{
			if (i/10==c) k++;
			if (i%10==c) k++;
		}
		 cout << endl << k;
		
	}
	


}