#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector <int> index;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                sum=nums[i]+nums[j];
                if(sum==target)
                {
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }
            }
        }
        return index;
    }
};