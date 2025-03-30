#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t = 0;
    cin >> t;
    while (t--)
    {
        // Using Array to make the solution generic
        int arr[4];
        for (int i = 0; i < 4; i++)
            cin >> arr[i];
        bool monopoly = false;
        int market_sum = 0;
        for (int i = 0; i < 4; i++)
        {
            market_sum = 0;
            for (int j = 0; j < 4; j++)
            {
                if (i != j)
                {
                    market_sum += arr[j];
                }
            }
            if (market_sum < arr[i])
            {
                monopoly = true;
                break;
            }
        }
        if (monopoly == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}