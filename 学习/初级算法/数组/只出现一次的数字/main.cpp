#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        int len=nums.size();
        for(int i=0;i<len;i++){
            map[nums[i]]++;
        }
        for(int i=0;i<len;i++){
            if(map[nums[i]]==1) return nums[i];
        }
	return 0;
    }
};
