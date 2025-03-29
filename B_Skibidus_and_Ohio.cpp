#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        string s ;
        cin >> s ;
        int len = s.size() ;
        if ( len>1 )
        {
            int count = 0 ;
            for ( int i = 0 ; i < len - 1 && s.size() > 1 ; i++ )
            {
                if ( s[i] == s[i+1] )
                {
                    count++ ;
                    break ;
                }
            }
            if ( count > 0 )
                cout << 1 << endl ;
            else
                cout << len << endl ;
        }
        else
            cout << 1 << endl ;
    }
    return 0 ;
}
