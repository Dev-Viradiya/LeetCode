class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long num = 1000;

        while(n >= num){
            ans += (n - num + 1);
            num *= 1000;
        }

        return ans;
    }
};