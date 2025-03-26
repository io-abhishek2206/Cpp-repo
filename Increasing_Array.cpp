#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int arr[n];
    
    for (long long int i = 0; i < n; i++)
        cin >> arr[i];
    long long int min_moves = 0;
    for (long long int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            min_moves += (arr[i] - arr[i + 1]);
            arr[i + 1] = arr[i];  // Make arr[i+1] equal to arr[i] in one step
        }
    }
    cout << min_moves << endl;
    return 0;
}