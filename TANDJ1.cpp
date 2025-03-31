#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b, c, d;
        cin >> a >> b >> c >> d;
        long int k;
        cin >> k;
        long int dis = abs(a - c) + abs(b - d);
        if (dis > k)
        {
            cout << "NO" << endl;
        }
        else if (dis == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (k % 2 == dis % 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}