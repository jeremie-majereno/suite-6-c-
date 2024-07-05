#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s[10],CMD,TP;
 int    R,C,n,i,L ;
 cin >> n;
 for (i=0; i<n; i++) cin >> s[i];
 cin >> CMD >> R;
 R--;
 if (CMD!="DS") {cin >> C; C--;};
 if (CMD=="RP") cin >> L;
 if ((CMD!="DS") && (CMD!="DC")) cin >> TP;
 if (CMD=="DS") {
                  for (i=R; i<n; i++) s[i]=s[i+1];
                  n--;
                }
 if (CMD=="DC") s[R].erase(C,1);
 if (CMD=="RC") s[R][C]=TP[0];
 if (CMD=="RP") {
                  s[R].erase(C,L);
                  s[R].insert(C,TP);
                }
 if ((CMD=="IC") ||
     (CMD=="IP")) s[R].insert(C,TP);
 for (i=0; i<n; i++) cout << s[i] << endl;
}