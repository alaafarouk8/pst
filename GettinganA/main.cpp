#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
bool check (int sum , int n)
{
    double  mean ;
    mean = sum/n ;
    if (mean>=4.5)
    {
        return true ;
    }
    return false ;
}
int main() {

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n ;
    cin >> n ;
    vector <int> grades ;
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        int g ;
        cin >> g ;
        grades.push_back(g) ;
        sum+=g ;
    }
    cout << check(sum,n) << endl ;
    sort(grades.begin(),grades.end());
    int ans = 0 ;
    while (!check(sum,n))
    {
        ans++ ;
        sum+=5-grades[ans];
    }
    cout << ans << endl;
    return 0;
}
