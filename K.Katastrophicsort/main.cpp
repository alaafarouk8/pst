#include <iostream>
#include <bits/stdc++.h>
using namespace  std ;
const int N = 1e5 + 2 ;
string s , t ;
int main() {
      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      cin >> s >> t ;
      string s1 , t1 , num1 , num2 ;
      if (s==t)
      {
          cout << "=" << endl ;
          return 0 ;
      }
      for(int i = 0 ; i < s.size() ; i++ )
      {
          if (s[i]>='a' && s[i] <= 'z')
          {
              s1[i] +=s[i] ;
          }
          else num1+=s[i] ;
      }
      for(int i = 0 ; i < t.size() ; i++ )
    {
        if (t[i]>='a' && t[i] <= 'z') t1[i] +=t[i] ;
        else num2+=t[i] ;
    }
    if (s1>t1)
    {
        cout << ">" << endl ;
    }
    else if (s1<t1) {cout << "<" << endl ;}
    else if (s1==t1)
    {
      if (num1>num2) {cout << "<" << endl ;}
      else
      {
          cout << ">" << endl ;
      }
    }



    return 0;
}
