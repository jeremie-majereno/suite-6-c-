#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	getline (cin,a);
	getline(cin,b);
	if (a<b) cout << a << " " << a.length();
	else cout << b << " " << b.length();
}