#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int q ;
    cin >> q ;
    map<string ,string > m ;
    while(q--){
        string old , neww ;
        cin >> old >> neww ;
        if(m.find(old) != m.end()){

            m[neww] = m[old] ;
            m.erase(old) ;
        }
        else
        {
            m[neww] = old ;
        }

    }
    cout << m.size() << endl ;
    for (auto i = m.begin() ; i!=m.end() ; i++)
    {
        cout << i->second << " " << i->first << endl ;
    }

    return 0;
}
