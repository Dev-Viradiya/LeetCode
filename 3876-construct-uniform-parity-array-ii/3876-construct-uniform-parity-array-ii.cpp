class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool odd = false;
        int mini = nums1[0];

        for(int n : nums1){
            if(n < mini){
                mini = n;
            }

            if(n & 1){
                odd = true;
            }
        }

        if(mini & 1){
            return true;
        }

        return !odd;

    }
};