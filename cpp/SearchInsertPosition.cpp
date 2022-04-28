class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    	int final = 0;
        if (std::find(nums.begin(), nums.end(), target) != nums.end())
        {
        	for (int i = 0; i < nums.size(); ++i)
        	{
        		if (nums[i] == target)
        		{
        			return i;
        		}
        	}
        }
        else
        {
        	if (nums[nums.size() - 1] < target)
        	{
        		return nums.size();
        	}
        	else
        	{
	        	for (int i = 0; i < nums.size(); ++i)
	        	{
	        		if (nums[i] > target)
	        		{
	        			return i;
	        		}
	        	}
        	}
        }
        return 0;
    }
};