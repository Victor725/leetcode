class Solution {
public:
    int reverse(int x) {
        long n=0;
        while(x){
            n=n*10+x%10;
            x/=10;
        }
        return (int)n==n?n:0;
    }
};