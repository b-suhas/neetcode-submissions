class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Taking an vector for storing index
        vector<int> result;

        // Iterating through nums
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                // Logic
                if(nums[i]+nums[j]==target)
                {
                    result.insert(result.begin(), i);
                    result.insert(result.begin() + 1, j);
                }
                
            }
        }
        // return the result vector
        return result;
    }
};
