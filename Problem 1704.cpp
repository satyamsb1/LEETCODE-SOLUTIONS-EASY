class Solution {
public:
    bool halvesAreAlike(string s) {
        int l=0, r=0, i;
        for( i=0; i<s.size()/2; i++)
        {
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                l++;
            }
        }
        for(;i<s.size();i++)
        {
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                r++;
            }
        }
        if(l==r)
        {
            return true;
        }
        else return false;
    }
