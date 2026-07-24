class Solution {
public:  

    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxPos = nums[0];
        int minNeg = nums[0];

        int curr = nums[0];
        for(int i=1;i<nums.size();i++){
            curr = max(curr + nums[i] , nums[i]);
            maxPos = max(maxPos , curr);
        }

        curr = nums[0];
        for(int i=1;i<nums.size();i++){
            curr = min(curr + nums[i] , nums[i]);
            minNeg = min(minNeg , curr);
        }

        return max(maxPos,abs(minNeg));
    }
};