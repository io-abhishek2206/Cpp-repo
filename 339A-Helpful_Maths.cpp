#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int arr[3] = {0};
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            count++;
            arr[0]++;
        }
        else if (s[i] == '2')
        {
            count++;
            arr[1]++;
        }
        else if (s[i] == '3')
        {
            count++;
            arr[2]++;
        }
    }
    if (count == 1)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            if (arr[0] != 0)
            {
                cout << "1";
                arr[0]--;
            }
            else if (arr[1] != 0)
            {
                cout << "2";
                arr[1]--;
            }
            else if (arr[2] != 0)
            {
                cout << "3";
                arr[2]--;
            }
            if (i != count - 1)
                cout << "+";
        }
        cout << endl;
    }
    return 0;
}
