#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        sort(strs.begin(),strs.end());
        string st=strs.front(),en=strs.back();
        int len=min(st.length(),en.length());
        int i=0;
        while(i<len&&st[i]==en[i]) i++;
        return strs[0].substr(0,i);
    }
};