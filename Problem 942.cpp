class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        int max=n;
        int min=0;
        int m=min;
        vector<int>res;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='I')
            {
                res.push_back(min);
                min++;
            }
            else if(s[i]=='D')
            {
                res.push_back(n);
                n--;
            }
        } 
        if(n==m)
        {
            res.push_back(min);
        }
        else res.push_back(n);
        return res;
    }
};
