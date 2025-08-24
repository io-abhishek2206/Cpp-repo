#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int original_len;
        cin>>original_len;
        string s;
        cin>>s;
        vector<char> original_s(s.begin(),s.end());
        int next_len;
        cin>>next_len;
        string x;
        cin>>x;
        vector<char> to_add_s(x.begin(),x.end());
        string y;
        cin>>y;
        vector<char> by_add_s(y.begin(),y.end());
        for(int i=0;i<next_len;i++)
        {
            if(by_add_s[i]=='D')
            {
                char temp = to_add_s[i];
                original_s.push_back(temp);
            }
            else
            {
                char temp = to_add_s[i];
                original_s.insert(original_s.begin(),temp);
            }
        }
        for(char c : original_s)
            cout<<c;
        cout<<endl;
    }
    return 0;
}