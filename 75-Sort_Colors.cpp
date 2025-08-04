#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0;
        int ones=0;
        int twos=0;
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                int temp=nums[x];
                nums[x]=nums[i];
                nums[i]=temp;
                x++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                zeros=i;
                break;
            }
        }
        x=zeros;
        for(int i=zeros;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                int temp=nums[x];
                nums[x]=nums[i];
                nums[i]=temp;
                x++;
            }
        }
        for(int i=zeros;i<nums.size();i++)
        {
            if(nums[i]!=1)
            {
                zeros=i;
                break;
            }
        }
    }
};