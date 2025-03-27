#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool isSecurePassword(const string &s) {
    set<char> specialChars;
    specialChars.insert('@');
    specialChars.insert('#');
    specialChars.insert('%');
    specialChars.insert('&');
    specialChars.insert('?');

    bool len = s.length() >= 10;
    bool small = false, large = false, digit = false, spec = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') small = true;
        if (i != 0 && i != s.length() - 1) {
            if (s[i] >= 'A' && s[i] <= 'Z') large = true;
            if (s[i] >= '0' && s[i] <= '9') digit = true;
            if (specialChars.count(s[i])) spec = true;
        }
    }

    return len && small && large && digit && spec;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string password;
        getline(cin, password);
        cout << (isSecurePassword(password) ? "YES" : "NO") << endl;
    }

    return 0;
}