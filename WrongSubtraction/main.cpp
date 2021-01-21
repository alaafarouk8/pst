#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n , k ;
    cin >> n>>k ;
    for (int i = 0 ; i < k ; i++)
    {
        ((n%10==0)?n/=10:n--) ;
    }
    cout << n << endl ;

    return 0;
}
