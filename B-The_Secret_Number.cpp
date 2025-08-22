#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int> ans;
        for(int i=1;i<19;i++)
        {
            long long d = (long long)pow(10LL, i) + 1;
            if(n%d==0)
            {
                ans.insert(ans.begin(),(n/d));
            }
        }
        if(ans.empty())
            cout<<0<<endl;
        else
        {
            cout<<ans.size()<<endl;
            for(long long int x : ans)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}