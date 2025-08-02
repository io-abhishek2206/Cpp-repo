#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        int* arr = new int[len]();
        for (int i = 0; i < len; i++) {
            arr[nums[i]]++;
        }
        for (int i = 0; i < len; i++) {
            if (arr[i] >= 2) {
                delete[] arr;
                return i;
            }
        }
        delete[] arr;
        return -1;
    }
};
