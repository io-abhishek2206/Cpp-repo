#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[6] = {3, 1, 2, 1, 0, 1};
        int size_array;
        cin >> size_array;
        int bag[size_array];
        for (int i = 0; i < size_array; i++)
            cin >> bag[i];
        int count = 0;
        int min_count = 0;
        for (int i = 0; i < size_array; i++)
        {
            if (bag[i] == 0)
            {
                arr[bag[i]]--;
                if (arr[bag[i]] >= 0)
                    count++;
            }
            else if (bag[i] == 1)
            {
                arr[bag[i]]--;
                if (arr[bag[i]] >= 0)
                    count++;
            }
            else if (bag[i] == 2)
            {
                arr[bag[i]]--;
                if (arr[bag[i]] >= 0)
                    count++;
            }
            else if (bag[i] == 3)
            {
                arr[bag[i]]--;
                if (arr[bag[i]] >= 0)
                    count++;
            }
            else if (bag[i] == 5)
            {
                arr[bag[i]]--;
                if (arr[bag[i]] >= 0)
                    count++;
            }
            else
                continue;
            if (count == 8)
            {
                min_count = ++i;
                break;
            }
            cout << endl;
        }
        cout << min_count << endl;
    }
}