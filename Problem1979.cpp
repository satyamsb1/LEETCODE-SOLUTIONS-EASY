class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums.front();
        int max=nums.back();
        
        return gcd(max, min);
    }
        int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a%b);
    }
};
        
