#include<iostream>
#include<vector>
using namespace std;

long long power3(int x) {
    long long res = 1;
    for(int i=0;i<x;i++) res *= 3;
    return res;
}

long long cost(int x) {
    if(x==0) return 3;
    return power3(x+1) + (long long)x * power3(x-1);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long totalCost = 0;
        while(n > 0) {
            int x = 0;
            while(power3(x+1) <= n) x++;
            n -= power3(x);
            totalCost += cost(x);
        }

        cout<<totalCost<<endl;
    }
    return 0;
}