class Solution {
public:
    bool canBeValid(string s, string locked) {
        int close=0;
        int open=0;
        
        int n=s.size();
        if(n&1)return false;
        for(int i=0; i<n; i++)
        {
            if(locked[i]=='0' || s[i]=='(') open++;
            else close++;
            if(close>open)return false;
        }
        open=0; close=0;
        for(int i=n-1; i>=0; i--)
        {
            if(locked[i]=='0' || s[i]==')')open++;
            else close++;
            if(close>open)return false;
        }
        return true;
    }
};
