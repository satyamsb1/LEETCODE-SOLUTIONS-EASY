class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string>v(10);  // for holding the words
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>48 && s[i]<58) // Finding the number
            {
                v[s[i]-48]=word +" ";  // 51-48=3 
                word=""; 
                i++;
            }
            else 
                word+=s[i];
        }
        string ans;
        for(string x :v)
        {
            ans+=x;
        }
        ans.pop_back();
        return ans;
    }
};
