#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;      
        int check_i=0;
        int check_j=0;
        for(int i=0,j=0;i<m && j<n;)
        {
            if(nums1[i]>=nums2[j])
            {
                temp.push_back(nums2[j]);
                j++;
                check_j=j;
            }
            else
            {
                temp.push_back(nums1[i]);
                i++;
                check_i=i;
            }
        }
        if(check_i==m)
        {
            for(int i=check_j;i<n;i++)
            {
                temp.push_back(nums2[i]);
            }
        }
        else if(check_j==n)
        {
            for(int i=check_i;i<m;i++)
            {
                temp.push_back(nums1[i]);
            }
        }
        for (int k = 0; k < temp.size(); k++) {
            nums1[k] = temp[k];
        }
    }
};