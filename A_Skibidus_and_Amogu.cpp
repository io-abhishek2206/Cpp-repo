#include <iostream>
using namespace std;
int main ()
{
    int t ;
    cin >> t ;
    while ( t-- ) 
    {
        string s ;
        cin >> s ;
        int len = s.size() ;
        for ( int i = 0 ; i < len - 2 ; i++ )
            cout << s[i] ;
        cout << 'i' << endl ;
    }
    return 0 ;
}
