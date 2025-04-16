#include <bits/stdc++.h>

#include<algorithm>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n, greater < int > ());
        int len = 0;
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                len = arr[i];
                t = i + 1;
                break;
            }
        }
        int breth = 0;
        for (int i = t + 1; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                breth = arr[i];
                break;
            }
        }
        if (len * breth)
            cout << len * breth << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}