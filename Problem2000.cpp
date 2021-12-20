class Solution {
public:
    string reversePrefix(string word, char ch) {
            int i;
            for(i=0; i<word.size(); i++)
            {
                if(word[i]==ch) //for now i=3
                {
                    reverse(word.begin(),word.begin()+i+1); //now reverse from i=0 to t=3 i.e 4 chars thats why we took i+1 there
                    break;
                }
            }
        return word;
        }
    
};

eg word="ascdf"
  ch=d
  
