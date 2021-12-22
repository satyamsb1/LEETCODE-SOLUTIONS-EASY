class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int s,l,d;
        
        s=nums[0]*nums[1];
        l=nums[n-1]*nums[n-2];
        
        return d=l-s;
    }
};
