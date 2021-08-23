#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        vector<int>n(len);
        for(int i=0;i<len;i++){
            n[(i+k)%len]=nums[i];
        }
        nums.assign(n.begin(),n.end());
    }
};