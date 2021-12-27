class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set <string> st;
        for(auto row : paths )
        {
            st.insert(row[1]);            
        }
        for(auto row : paths)
        {
            if(st.count(row[0]) > 0)
            {
                st.erase(row[0]);
            }
        }
        for(string s : st){
            return s;
        }
        return "";
    }
};
