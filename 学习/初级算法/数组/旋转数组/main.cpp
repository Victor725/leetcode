#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int count=__gcd(n,k);
        for(int start=0;start<count;start++){
            int current=start;
            int prev=nums[start];
            do{
                int next=(current+k)%n;
                swap(nums[next],prev);
                current=next;
            }while(current!=start);
        }
    }
};