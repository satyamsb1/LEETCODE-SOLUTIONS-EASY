class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string res;
        for(int i=0; i<strs[0].size(); i++) //here we are iterating over every single word
        {
            for(string s : strs) //here we will iterate through letters through first word in the string 
            {
                if(s[i]!=strs[0][i]) // ofc if we will iterate only if letter at specific index is same in consecutive words.
                {
                    return res;    
                }
                else 
                    continue;
            }
        res+=strs[0][i]; 
        }
        return res;
    }
};
