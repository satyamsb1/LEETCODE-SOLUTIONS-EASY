class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    	vector<int> res;
    	vector<int>::iterator iter;
    	for (int i = 0; i < index.size(); i++) {
    		iter = res.begin();
    		res.insert(iter + index[i], nums[i]);
    	}

    	return res;
    }
};
