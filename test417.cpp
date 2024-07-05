#include <bits/stdc++.h>
using namespace std;
int main()
{
	string h[30],m[30],s[30],k[30],ss;
	int i,n;
	cin >> n;
	for (i=0; i<n; i++)
	{
		cin >> ss;
		h[i]=ss.substr(0,2);
		m[i]=ss.substr(3,2);
		s[i]=ss.substr(6,3);
	}
	for (i=0; i<n; i++) cout << h[i] << " " ; cout << endl;
	for (i=0; i<n; i++) cout << m[i] << " " ; cout << endl;
    for (i=0; i<n; i++) cout << s[i] << " " ;cout << endl;
 }