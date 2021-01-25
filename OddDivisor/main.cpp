#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0) ;
    int t = 0 ;
    cin >> t ;

    long long  n ;
    while (t--)
    {
          cin >> n ;
       cout<< ((n&(n-1))? "YES" : "NO") << endl ;

    }
    return 0;
}

