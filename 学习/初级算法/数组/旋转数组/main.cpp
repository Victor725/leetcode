#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length=nums.size();
        vector<int>n(length);
        for(int i=0;i<length;i++){
            n[(i+k)%length]=nums[i];
        }
        nums.assign(n.begin(),n.end());
    }
};