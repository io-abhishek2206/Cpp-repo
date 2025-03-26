#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    vector<long int> arr(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= n)
            arr[x]++;
    }
    for (int i = 1; i <= n; i++)  // Check up to n
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}