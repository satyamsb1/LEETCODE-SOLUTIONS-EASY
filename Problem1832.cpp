class Solution {
public:
    bool checkIfPangram(string sentence) {  ////This code is faster 100%
       vector <int> v(26,0);
        for(auto x: sentence){
            v[x-'a']=1;
        }
        return accumulate(v.begin(), v.end(),0)==26;
    }
};

class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool alpha[26]={false};          ///This code is faster than 66% submissions
        bool flag=true;
        for(char s : sentence)
        {
            alpha[s-'a']=true;
        }
        for(int i=0; i<26; i++)
        {
            if(alpha[i]!=true)
            {
                flag=false;
                return flag;
            }
        }
        return flag;
    }
};
