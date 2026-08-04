class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int cnt = nums[0];
        int i=0;
        while(i < nums.size()){
            if(cnt == nums[i]){
                cnt++;
                i++;
                continue;
            }
            ans.push_back(cnt);
            cnt++;
        }

        return ans;
    }
};