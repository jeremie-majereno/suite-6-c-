#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int da,db;
	getline(cin,a);
	getline(cin,b);
	da=a.length();
	db=b.length();
	if ((da<db) || ((da==db)&&(a<b))) cout << a;
	if ((da>db) || ((da==db)&&(a>b))) cout << b;
}