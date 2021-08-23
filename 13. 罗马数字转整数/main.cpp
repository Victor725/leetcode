#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int val=0,r=0,n=s.length();
        unordered_map<char, int> symbolValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        for(int i=0;i<n;i++){
            val=symbolValues[s[i]];
            if(i<n-1&&symbolValues[s[i+1]]>val){
                r-=val;
            }
            else{
                r+=val;
            }
        }
        return r;
    }
};