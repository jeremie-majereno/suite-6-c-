#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int i,d;
	getline(cin,s1);
	getline(cin,s2);
	d=s1.length();
	for (i=0; i<d; i++) cout << s1[i] << s2[i];
}