class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            int s=arr.size()-i;
            int e=i+1;
            int odd=0;
            if(s*e%2==0)
            {
                odd=s*e/2;
            }
            else
            {
                odd=s*e/2+1;
            }
            sum+=arr[i]*odd;
        }
        return sum;
    }
};
