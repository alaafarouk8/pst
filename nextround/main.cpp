#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
const int N = 100+2 ;
int arr[N] ;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n , k ;
    cin >> n>> k ;
    int cnt = 0 ;
    for (int i = 0 ; i < n ;i++ )
    {
        cin >> arr[i] ;
    }
  //  sort(arr,arr+n) ;
    for (int i  = 0; i< n ; i++ )
    {
       // cout << arr[k-1] << endl ;
        if (arr[i]>=arr[k-1]&& arr[i]!=0) cnt++ ;
    }
    cout << cnt << endl ;
    return 0;
}
