#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n ;
bool check(int sum , int n)
{
    float mean = 0.0 ;
    mean = (double) sum/n ;
    return ((mean>=4.5)? 1:0) ;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n ;
    vector <int> grades ;
    int sum = 0  ;
    for (int i  = 0 ; i < n ; i++)
    {
        int x ;
        cin >> x ;
        grades.push_back(x);
        sum+=x ;
    }
    sort(grades.begin(),grades.end()) ;
    int res = 0 ;
    while (!check(sum,n))
    {
        int diff = 5 - grades[res] ;
        sum = sum + diff;
        res = res+1 ;

    }
    cout << res << endl ;

    return 0;
}
