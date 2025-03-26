#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int problem_count=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>1)
            problem_count++;
    }
    cout<<problem_count<<endl;
    return 0;
}