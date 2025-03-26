#include<iostream>
#include <vector>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long sum = (n * (n + 1)) / 2;
    if(sum%2==1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    vector<long long int> set1,set2;
    long long int target=sum/2;
    long long int curr_sum=0;
    for(long long int i=n;i>0;i--)
    {
        if(curr_sum + i <= target)
        {
            set1.push_back(i);
            curr_sum+=i;
        }
        else
            set2.push_back(i);
    }
    cout << set1.size() << endl;
    for (int i=0;i<set1.size();i++)
    {
        cout<<set1[i]<<" ";
    }
    cout << endl;
    cout << set2.size() << endl;
    for (int i=0;i<set2.size();i++)
    {
        cout<<set2[i]<<" ";
    }
    return 0;
}