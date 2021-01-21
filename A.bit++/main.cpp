#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n ;
    cin >> n ;
    string str ;
    int cnt =0 ;
    for (int i = 0 ; i < n ; i++)
    {
        cin>> str ;
        if (str[0]=='+' || str[1]=='+') cnt++ ;
        else if (str[0]=='-' || str[1]=='-') cnt-- ;
    }
    cout << cnt <<endl ;
    return 0;
}
