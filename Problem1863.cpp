class Solution {
    int result;
    void helper(vector<int>& nums,int sum,int i)
    {
        if(i<nums.size()-1)
        {
             helper(nums,sum,i+1);
             helper(nums,sum^nums[i],i+1);
        }
        else
        {
            result+= sum + (sum^nums[i]);
        }
    }
public:
    int subsetXORSum(vector<int>& nums) {
        result=0;
        helper(nums,0,0);
        return result;
    }
};
