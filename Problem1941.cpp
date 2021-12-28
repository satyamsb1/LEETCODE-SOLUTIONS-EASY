class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int arr[26]={0};
        for(int i=0; i<s.size(); i++)
        {
            arr[s[i]-'a']++;
        }
        int size=sizeof(arr)/sizeof(arr[0]);
        int max=*max_element(arr, arr+size);
        for(int i=0; i<size; i++)
        {
            if(arr[i]!=max && arr[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};
