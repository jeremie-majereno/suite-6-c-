#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s[10];
 int    d[10],n,i,R,C,Ra,Ca;
 char   T;
 cin >> n;
 for (i=0; i<n; i++)
   {
     cin >> s[i];
     d[i]=s[i].length()-1;
   }
 cin >> R >> C >> T;
 n--; R--; C--;
 if (T=='R') {
               if ((R==n) && (C==d[n])) { Ra=R;   Ca=C;   };
               if ((R<n)  && (C==d[R])) { Ra=R+1; Ca=0;   };
               if ((R<n)  && (C!=d[R])) { Ra=R;   Ca=C+1; };
             };
 if (T=='L') {
               if ((R==0) && (C==0))    { Ra=R;   Ca=C;     };
               if ((R>0)  && (C==0))    { Ra=R-1; Ca=d[Ra]; };
               if ((R>0)  && (C!=0))    { Ra=R;   Ca=C-1;   };
             };
 if (T=='D') {
               if (R==n)                { Ra=R;   Ca=C;     };
               if ((R<n) && (C<=d[R+1])){ Ra=R+1; Ca=C;     };
               if ((R<n) && (C> d[R+1])){ Ra=R+1; Ca=d[R+1];};
             };
 if (T=='U') {
               if (R==0)                { Ra=R;   Ca=C;      };
               if ((R>0) && (C<=d[R-1])){ Ra=R-1; Ca=C;      };
               if ((R>0) && (C> d[R-1])){ Ra=R-1; Ca=d[R-1]; };
             }
 cout << s[Ra][Ca];
}