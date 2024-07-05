#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s,s1,s2,s3;
 int    d,i;
 getline(cin,s);
 d=s.length();
 s1=""; s2=""; s3="";
 for (i=0; i<d-2; i+=3)
   {
     s1=s1+s[i];
     s2=s2+s[i+1];
     s3=s3+s[i+2];
   }
 cout << s1 << endl;
 cout << s2 << endl;
 cout << s3;
}