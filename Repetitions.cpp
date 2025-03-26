#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int max_len=0;
    long long int size=s.size();
    long long int temp=1;
    if(size==1)
        cout<<1<<endl;
    else
    {
        for(long long int i=0;i<size-1;i++)
        {
            if(s[i]==s[i+1])
            {
                temp++;
            }
            else
            {
                max_len=max(max_len,temp);
                temp=1;
            }
        }
        max_len=max(max_len,temp);
        cout<<max_len<<endl;
    }
    return 0;
}