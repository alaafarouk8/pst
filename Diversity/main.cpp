#include <iostream>
#include <bits/stdc++.h>
using namespace  std ;
int countDistinct(string s)
{

    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }

    return m.size();
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s ;
    int k ;
    cin >> s>>k ;

    int count = countDistinct(s)  ;
    if ((k-count) < 0 )  {cout << "0" << endl ;}
    else if (k>s.size()) {cout << "impossible" << endl ;}
    else
    {
        cout << k-count << endl ;
    }
    return 0;
}
