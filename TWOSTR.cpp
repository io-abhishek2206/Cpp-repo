#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin>>x>>y;
        bool match = true;
        
        for (int j = 0; j < x.length(); j++) {
            if (x[j] != '?' && y[j] != '?' && x[j] != y[j]) {
                match = false;
                break;
            }
        }
        
        cout << (match ? "Yes" : "No") << endl;
    }

}