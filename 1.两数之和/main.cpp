#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        unordered_map<int,int> ht;
        for(int i=0;i<len;i++){
            auto it=ht.find(target-nums[i]);
            if(it!=ht.end()){
                return {it->second,i};
            }
            ht[nums[i]]=i;
        }
        return {};
    }
};