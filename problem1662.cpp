class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1,res2;
        for(string str:word1){
            res1+=str;
        }
        for(string str:word2){
            res2+=str;
        }
        return (res1==res2);
    }
};
