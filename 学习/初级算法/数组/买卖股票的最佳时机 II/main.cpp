#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int dp0=0,dp1=-prices[0];
        for(int i=1;i<size;i++){
            dp0=max(dp0,dp1+prices[i]);
            dp1=max(dp1,dp0-prices[i]);
        }
        return dp0;        
    }
};