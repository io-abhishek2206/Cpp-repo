#include<iostream>
#include "Random_generator.h"
using namespace std;
int main()
{
    int x;
    cout<<"Enter elements :";cin>>x;
    int range;
    cout<<"Enter Range :";cin>>range;
    int *arr=new int[x];
    arr=Rdm(x,range);
    cout<<"The array before sorting is ->"<<endl;
    for(int i=0;i<x;i++) //printing unsorted array
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"-----------------------------"<<endl;
    cout<<"After Insertion Sort ->"<<endl;
    for(int i=1;i<x;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        
    }
    for(int i=0;i<x;i++) //printing sorted array
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"-----------------------------"<<endl;
    return 0;
}