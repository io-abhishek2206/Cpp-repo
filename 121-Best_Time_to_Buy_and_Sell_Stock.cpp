#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool check =true;
        for(int i=0;i<prices.size()-1;i++)
        {
            if(prices[i]<prices[i+1])
                check=false;
        }
        if(check)
            return 0;
        else
        {
            int max_profit=0;
            int profit=0;
            int small_number=100000;
            for(int i=0;i<prices.size();i++)
            {
                if(prices[i]<small_number)
                    small_number=prices[i];
                if(small_number<prices[i])
                {
                    profit=prices[i]-small_number;
                    if(profit>max_profit)
                        max_profit=profit;
                }
            }
            return max_profit;
        }
    }
};