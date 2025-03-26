#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        long long n = max(x, y);  
        long long max_value = n * n;
        
        if (n % 2 == 0) { 
            if (x == n) {
                cout << max_value - (y - 1) << endl;
            } else {
                cout << max_value - (n - 1) - (n - x) << endl;
            }
        } else {
            if (y == n) {
                cout << max_value - (x - 1) << endl;
            } else {
                cout << max_value - (n - 1) - (n - y) << endl;
            }
        }
    }
    return 0;
}