#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        vector<ll> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        sort(p.rbegin(),p.rend());
        long long int count=0;
        long long int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=p[i];
            if(sum>=m)
            {
                count++;
                break;
            }
            else
            {
                count++;
            }
        }
        if(sum<m)
        {
            cout<<-1<<endl;
        }
        else
            cout<<count<<endl;
    }
    return 0;
}
