#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
    public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        int left = 0, answer = 0;
        
        for (int right = 0; right < static_cast<int>(nums.size()); ++right) {
            ++frequency[nums[right]];
            
            while (frequency[nums[right]] > k) {
                --frequency[nums[left]];
                ++left;
            }
            
            answer = max(answer, right - left + 1);
        }
        
        return answer;
    }
};