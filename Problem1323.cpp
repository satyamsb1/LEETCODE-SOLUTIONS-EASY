class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        string res="";
        bool flag=true;
        for(int i=0; i<s.size(); i++)
        {
           if(s[i]=='6' && flag==true )
            {
                res+='9';
                flag=false;
            }
            else
            {
                res+=s[i];
            }
        }
        int r=stoi(res);
        return r;
    }
};
