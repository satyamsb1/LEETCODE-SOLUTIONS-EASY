class Solution {
public:
    bool strongPasswordCheckerII(string p) {
        int n=p.size();
        bool Special=false, Upper=false, Lower=false, Number=false;
        string s="!@#$%^&*()-+";
        
        if(n<8) return false;
        for(char c:p)
        {
            if(c>='a' && c<='z'){
                Lower=true;
            }
            if(c>='A' && c<='Z'){
                Upper=true;
            }
            if(c>='0' && c<='9'){
                Number=true;
            }
            for(char sp:s)
            {
                if(c==sp)
                {
                    Special=true;
                }
            }
        }
        if(!Special || !Upper || !Number || !Lower) return false;
        
        for(int i=0; i<n-1; i++)
        {
            if(p[i]==p[i+1]) return false;
        }
        return true;
    }
};
