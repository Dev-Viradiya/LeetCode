class Solution {
public:
    int countDigits(int num) {
        int ans = 0;
        int temp = num;
        while(temp != 0){
            int digit = temp % 10;
            temp /= 10;
            if(num % digit == 0){
                ans++;
            }
        }

        return ans;
    }
};