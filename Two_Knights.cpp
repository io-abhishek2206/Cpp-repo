#include <iostream>
#include<math.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    long long int temp=0;
    for (long long int i = 0; i < n; i++) 
    {
        long long int x = (pow(i,4)+(4*pow(i,3))-(3*pow(i,2))+(10*i))/2;
        cout<<x<<endl;
        if(i==37)
            temp=x;
    }
    //cout<<temp<<endl;
    return 0;
}