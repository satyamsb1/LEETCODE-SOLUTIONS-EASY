class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0, x;
        
        for(int i=0; i<nums.size();i++)
        {
            for(int j=1; j<nums.size();j++)
            {
                if(i<j)
                {
                if(abs(nums[i]-nums[j])==k)
                {
                    count++;
                }
                }
            }
        }
        return count; 
    }
};
