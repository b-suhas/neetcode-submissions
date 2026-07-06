class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Sorting the vector
        sort(nums.begin(),nums.end());
        // Checking if the vector is empty or not
        if(nums.empty())
        {
            return false;
        }
        // Comparing the present element to the next element to see if there are any duplicates 
        for(int i=0;i<nums.size()-1;i++)
        {
            
                if(nums[i]==nums[i+1])
                {
                    return true;
                }

        }
        // If duplicates are not founc then returning false
        return false;
    }
};
