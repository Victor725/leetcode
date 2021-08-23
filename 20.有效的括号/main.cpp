#include<string>
#include<stack>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int len=s.length();
        if(len%2!=0) return false;
        if(!len) return true;
        unordered_map<char,char> m={
            {'(',')'},
            {'[',']'},
            {'{','}'}
            };
        stack<char> sta;
        int i=0;
        while(i<len){
            if(m.count(s[i])) sta.push(s[i]);
            else{
                if(sta.size()&&m[sta.top()]== s[i]) sta.pop();
                else return false;
            }
            i++;
        }
        if(sta.size()!=0) return false;
        else return true;
    }
};