class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        int H[101]={0};
        
        for(int i=0; i<nums.size(); i++)
        {
            H[nums[i]]++;
        }
        for(int i =0; i<101; i++)
        {
            if(H[i]==1)
            {
                sum+=i;
            }
        }
        return sum; 
    }
};
