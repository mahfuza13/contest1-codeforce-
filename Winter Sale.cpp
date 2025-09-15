#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    float X , P ;
    float C ;
    cin >> X >> P ;
    C = P / (1-(X/100)) ;
    cout << fixed << setprecision(2) ;
    cout << C << endl ;
    return 0;
}
