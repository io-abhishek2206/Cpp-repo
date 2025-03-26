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
    cout<<"After Selection Sort ->"<<endl;
    for(int i=0;i<x;i++) //applying selection sort
    {
        int min=arr[i];
        for(int j=i+1;j<x;j++)
        {
            if(min>arr[j])
            {
                int temp=min;
                min=arr[j];
                arr[j]=temp;
            }
        }
        arr[i]=min;
    }
    for(int i=0;i<x;i++) //printing sorted array
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"-----------------------------"<<endl;
}
