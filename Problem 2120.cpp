class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int m=s.size(),j=0;
        vector<int>ans(m);
        
        while(j<m){
        int count=0;
        int a=startPos[0] , b=startPos[1];
            for(int i=j;i<m; i++)
            { 
                if(s[i]=='U' && a-1>=0)
                    {                                                               
                        count++;
                        a--;
                    }
                 
                else if(s[i]=='D' && a+1<n)
                {
                    count++;
                    a++;
                }
                
                else if(s[i]=='R' && b+1<n)
                {
                   count++;
                   b++;
                }
               
                else if(s[i]=='L' && b-1>=0)
                {
                    count++;
                    b--;
                }
           
                else 
                    break;
            }
               ans[j++]=count;
       
        }
         
        return ans;
    }
};
