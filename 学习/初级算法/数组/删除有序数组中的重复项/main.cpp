#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        if(!len) return 0;
        int relen=0;
        for(int i=0;i<len;i++){//right pointer
            if(nums[relen]==nums[i]){
                continue;
            }
            else{
                nums[++relen]=nums[i];
            }
        }
        return relen+1;
    }
};