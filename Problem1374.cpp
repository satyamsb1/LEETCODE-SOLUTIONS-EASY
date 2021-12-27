class Solution {
public:
    string generateTheString(int n) {
        string res="";
        if(n%2==0)
        {
            res.append("a");
                string ch="b";
            for(int i=1; i<n ; i++)
            {
                res.append(ch);
            }
        }
        else
            for(int i=0; i<n; i++)
            {
                res.append("a");
            }
        return res;
    }
};
