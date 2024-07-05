#include <bits/stdc++.h>
using namespace std;
int main()
{
 char c,d;
 int  k;
 cin >> c >> k;
 d=c-k;
 if ((isupper(c) && (d<'A')) ||
     (islower(c) && (d<'a')))   d+=26;
 cout << d;
}