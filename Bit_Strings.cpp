#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

// Function to calculate (base^exp) % mod using binary exponentiation
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {  // If exponent is odd
            result = (result * base) % mod;
        }
        base = (base * base) % mod;  // Square the base
        exp /= 2;
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    cout << power(2, n, MOD) << endl; // Compute 2^n % (10^9 + 7)
    return 0;
}