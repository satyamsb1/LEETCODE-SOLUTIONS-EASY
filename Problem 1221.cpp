class Solution {
public:
    int balancedStringSplit(string s) {
    int countF=0,count=0;
    for(int i=0; s[i]!='\0';i++)
    {
        if(s[i]=='R')
         {
               count++;
        }
         if(s[i]=='L')
        {
            count--;
        }
            if(count==0)
         {
            countF++;
         }    
    }
        return countF;
    }
};
