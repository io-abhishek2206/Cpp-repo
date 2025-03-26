#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        int max;
        int count = 0;
        int temp_count = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (arr[i] == arr[j])
                    temp_count++;
            }
            if (temp_count > count)
            {
                count = temp_count;
                max = arr[i];
            }
            else if (temp_count == count)
            {
                max = min(max, arr[i]);
            }
            temp_count = 0;
        }
        cout << max << " " << count << endl;
    }
}
