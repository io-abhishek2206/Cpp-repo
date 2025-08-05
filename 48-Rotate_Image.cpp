#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                if (i < j) {
                    int temp = matrix[j][i];
                    matrix[j][i] = matrix[i][j];
                    matrix[i][j] = temp;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0, l = matrix.size() - 1; j < matrix.size() / 2;
                 j++, l--) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][l];
                matrix[i][l] = temp;
            }
        }
    }
};