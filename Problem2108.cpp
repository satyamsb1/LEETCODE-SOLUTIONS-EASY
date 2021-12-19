class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto i:words){
            string j=i;
            reverse(j.begin(),j.end());
            if(i==j)return i;
        }
        return "";
    }
};
