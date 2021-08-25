#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len=nums.size();
        unordered_map<int,bool>map;
        for(int i=0;i<len;i++){
            if(map.find(nums[i])==map.end()) map[nums[i]]=true;
            else return true;
        }
        return false;
    }
};
