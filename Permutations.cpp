#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    if(n>1 and n<4)
        cout<<"NO SOLUTION"<<endl;
    else
    {
        for(ll int i=2;i<=n;i+=2)
            cout<<i<<" ";
        for(ll o n tgvb  int i=1;i<=n;i+=2)
            cout<<i<<" ";
    }  
    return 0; 
}