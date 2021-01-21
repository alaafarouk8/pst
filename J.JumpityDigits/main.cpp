#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
const int N = 1e5+2 ;
#define ll long long ;
int n ;
int arr[N] ;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n ;
  long long res = 0;
  for (int i =0 ; i< n ;i++)
  {
      cin >> arr[i] ;
      if (i&&arr[i] <arr[i-1])
      {
          res+=arr[i-1]-arr[i] ;
      }
  }
  cout << res << endl;

}
