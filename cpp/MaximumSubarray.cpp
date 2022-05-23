class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxValue = nums[0];
        int sum = maxValue;
        for (int i = 1; i < nums.size(); i++) {
        	maxValue = max(max+nums[i], nums[i]);
        	sum = maxValue;
        }
        return sum;
    }
};