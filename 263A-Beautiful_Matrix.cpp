#include <iostream>
using namespace std;
int main()
{
    int mat[5][5];
    int i_index , j_index;
    for ( int i = 0 ; i < 5 ; i++ )
    {
        for ( int j = 0 ; j < 5 ; j++ )
        {
            cin >> mat[i][j] ;
            if ( mat[i][j] == 1 )
            {
                i_index = i + 1;
                j_index = j + 1;
            }
        }
    }
    int min_moves = 0 ;
    if ( i_index == 3 && j_index == 3 )
        cout<<min_moves<<endl;
    else
    {
        if ( i_index <= 3 )
            min_moves = min_moves + ( 3 - i_index );
        else
            min_moves = min_moves + ( i_index - 3 );
        if ( j_index <= 3 )
            min_moves = min_moves + ( 3 - j_index );
        else
            min_moves = min_moves + ( j_index - 3 );
        cout << min_moves << endl;
    }
    return 0;
}
