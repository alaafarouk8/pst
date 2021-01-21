#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
float distance(int x, int y, int a, int b)
{
    // Calculating distance
    return  sqrt((a - x) * (a - x) + (b - y) * (b - y));
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a ,b ;
    cin >>  a>> b ;
    int n ;
    cin >> n ;
    float time = 10e15;
    //time = distance / speed
    for (int i = 0 ; i < n ;i++)
    {
        int x , y , v ;
        cin >> x >> y >> v ;

        time = min(time,distance(x,y,a,b)/v) ;
    }
    cout << fixed << setprecision(20) << time ;
    return 0;
}
