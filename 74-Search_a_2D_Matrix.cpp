#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool check = false;
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == target) {
                check = true;
                break;
            }
            else if (matrix[i][0] > target && i!=0) {
                for (int j = 0; j < n; j++) {
                    if (matrix[i - 1][j] == target) {
                        check = true;
                        break;
                    }
                }
            }
            if(i==m-1)
            {
                for (int j = 0; j < n; j++) {
                    if (matrix[i][j] == target) {
                        check = true;
                        break;
                    }
                }
            }
        }
        return check;
    }
};