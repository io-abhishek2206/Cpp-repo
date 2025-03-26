#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n;cin>>n;
    long long int count=0;
    for(int i=1;i<=15;i++)
    {
        int temp=n/pow(5,i);
        if(temp!=0)
            count+=temp;
    }
    cout<<count<<endl;
}