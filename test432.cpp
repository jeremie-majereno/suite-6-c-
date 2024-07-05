#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,w;
	int i,d,j;
	for (j=0; j<2; j++)
	{
		getline(cin,s);
		d=s.length();
		w=s[0];
		for (i=1; i<d; i++)
			if (w.find(s[i])>d) w+=s[i];
		cout << w << endl;
	}

}