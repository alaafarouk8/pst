#include <iostream>
#include <bits/stdc++.h>
using namespace  std ;
const int N = 100+2 ;
int n , arr[N] ;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    int cntEven= 0 , cntOdd = 0 ;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    for (int i = 1; i <= 3; i++) {
        if(arr[i] % 2 == 0) {
            cntEven ++;
        }
        else {
            cntOdd ++ ;  }
  //     cout << " even = " << cntEven << "  " << "odd = " << cntOdd << endl ;
    }
    if (cntEven <= 1) {
        for (int i = 1; i <= n; i++)
            if (arr[i] % 2 == 0) cout << i;
    } else {
        for (int i = 1; i <= n; i++)
            if (arr[i] % 2 == 1) cout << i;
    }

    return 0;
}
