#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
const int N = 200 ;
int check (string str , int n ){

    set <char> s ;
    int res = 0 ;
    int l = 0;
    for (int i = 0 ; i < n ; i++)
    {
        if (islower(str[i]) && s.count(str[i]) == 0)
        {
            s.insert(str[i]) ;
            l = s.size() ;
            res = max(res,l) ;
        }
        if (isupper(str[i])) {
            s.clear() ;
        }

    }
    return res ;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n ;
    cin >> n ;
    string str ;
    cin >> str ;
    cout <<  check(str,n) << endl ;
    return 0;
}
