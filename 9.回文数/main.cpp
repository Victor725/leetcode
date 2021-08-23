#include<exception>
#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x%10==0&&x!=0) return false;
        if(x==0) return true;

        int rev=0;
        while(x>rev){
            rev=rev*10+x%10;
            x/=10;
        }
        return x==rev||x==rev/10?true:false;
    }
};

int main(){
    Solution s;
    int x=1234567899;
    cout<<s.isPalindrome(x);
}