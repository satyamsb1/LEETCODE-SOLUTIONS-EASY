class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int>res;
        
        for(int i=0; i<prices.size(); i++)
        {   int j;
            for(j=i+1; j<prices.size(); j++)
            {
                if(prices[j]<=prices[i]){
                    res.push_back(prices[i]-prices[j]);
                    break;
                }
                
            }
            if(j==prices.size())
            {
                res.push_back(prices[i]);
            }
        }
        
        return res;
    }
}
