#include<iostream>
#include<vector>
#include<climits>
using namespace std;
#define ll long long
int main()
{
    long long n;
    cin>>n;
    vector<ll> arr(n);
    int max=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    vector<ll> freq_arr(max+1,0);
    for(ll int i=0;i<n;i++)
    {
        freq_arr[arr[i]]++;
    }
    int dist_count=0;
    for(ll int i=0;i<=max;i++)
    {
        if(freq_arr[i]>0)
            dist_count++;
    }
    cout<<dist_count<<endl;
    return 0;
}