class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;
        unordered_map<int, int>map;
        for(int i=0; i<nums.size(); i++)
        {
            int targetnum=target-nums[i];
            if(map.find(targetnum)!=map.end())
            {
                result.push_back(map[targetnum]);
                result.push_back(i);
                return result;
            }
                map[nums[i]]=i;
        }
        return result;
       
        
    }
};
