class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int net=0;
        int g=0;
        for(int i=0; i<gain.size(); i++)
        {
            g+=gain[i];
            if(g>net)
            {
                net=g;
            }
        }
        return net;
    }
};
