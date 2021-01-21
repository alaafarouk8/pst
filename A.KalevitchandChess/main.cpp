#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
const int N = 8 ;
char matrix[N][N] ;
bool check_All_black()
{
    for (int i = 0 ; i < N ; i++)
        for (int j = 0 ; j < N ; j++ )
            if (matrix[i][j] != 'B')
                return false ;
    return true ;
}
int countblackinrows()
{
    int cnt = 0 ;
   for (int i = 0 ; i  < N ; i++ ) {
       bool all_black = true;
       for (int j = 0;  j < N ; j++ ) {
           if (matrix[i][j] != 'B') all_black = false;
       }
       if (all_black)
           cnt++ ;

   }
    return cnt ;
}
int countblackincolumns()
{
    int cnt = 0 ;
    for (int i = 0 ; i  < N ; i++ ) {
        bool all_black = true;
        for (int j = 0;  j < N ; j++ ) {
            if (matrix[j][i] != 'B') all_black = false;
        }
        if (all_black)
            cnt++ ;

    }
    return cnt ;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    for (int i = 0 ; i < N ; i++)
        for (int j = 0 ; j < N ; j++)
            cin>> matrix[i][j] ;
    if (check_All_black())
    {
        cout << "8" << endl ;
    }
    else
    {
        cout << countblackinrows()+countblackincolumns()<< endl ;
    }
    return 0;
}
