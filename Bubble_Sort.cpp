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
    for(int i=1;i<x;i++)
    {
        for(int j=0;j<x-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After Bubble Sort -->"<<endl;
    for(int i=0;i<x;i++) //printing sorted array
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"-----------------------------"<<endl;
}