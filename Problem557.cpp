class Solution {
public:
    vector<string> split(string str, char delimiter) { 
  vector<string> internal; 
  stringstream ss(str); // Turn the string into a stream. 
  string tok; 
 
     while(getline(ss, tok, delimiter)) { 
    internal.push_back(tok); 
    } 
 
    return internal; 
    }
    string reverseWords(string s) {
        vector <string> res= split(s,' ');
        string result;
        for(int i=0; i<res.size(); i++)
        {
            reverse(res[i].begin(), res[i].end());
            if(result.size()==0)
            {
                result+=res[i];
            }
            else
            {
                result+=" "+res[i];
            }
            
        }
        return result;
    }
};
