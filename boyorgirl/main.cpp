#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int countDistinct(string s)
{

    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }

    return m.size();
}
int main() {
    string str ;
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> str ;
    int l = str.length() ;
    char c [l+1] ;
    strcpy(c,str.c_str()) ;
    int cnt = countDistinct(str) ;
    cout << ((cnt%2==0)?"CHAT WITH HER!" :"IGNORE HIM!") ;


    return 0;
}
