class Solution {
public:
    int numberOfMatches(int n) {
        int m=0;
        int res=0;
        while(n>1)
        {
            if(n%2==0)
            {
                m=n/2;
                n=n/2;
                res+=m;
            }
            else if(n%2!=0)
            {
                //m++;
                m=(n-1)/2;
                n=((n-1)/2)+1;
                res+=m;
            }
            
        }
        return res;
    }
};
