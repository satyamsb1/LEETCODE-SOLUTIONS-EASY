class Solution {
public:
    vector<int> sumZero(int n) {
        int sum=0;
        vector<int>res;
        int num=n;
        for(int i=0; i<n-1;i++)
        {
            res.push_back(num-1);
            sum+=num-1;
            num--;
        }
        res.push_back(-sum);
        return res;
    }
};
