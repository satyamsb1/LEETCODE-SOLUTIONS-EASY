class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rulekey, string ruleValue) {
        int i=0;
        if(rulekey=="type")
            i=0;
        if(rulekey=="color")
            i=1;
        if(rulekey=="name")
            i=2;
        
        int ans=0;
        for(int j=0; j<items.size(); j++)
        {
            if(items[j][i]==ruleValue) ans++;
        }
        return ans;
    }
};
