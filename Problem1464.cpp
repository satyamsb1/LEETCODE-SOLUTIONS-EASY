class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int num=nums.size();
        sort(nums.begin(), nums.end());
            
            return (nums[num-2]-1)*(nums[num-1]-1);
    }
};
