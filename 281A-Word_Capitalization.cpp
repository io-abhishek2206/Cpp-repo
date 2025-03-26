#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s ;
    cin >> s;
    if ( int ( s[0] ) > 96 && int ( s[0] ) < 123 )
    {
        cout << char ( int ( s[0] ) - 32 ) ;
        for ( int i = 1 ; i < s.size() ; i++ )
            cout << s[i] ;
        cout << endl ; 
    }
    else
        cout << s << endl ;
    return 0 ;
}
