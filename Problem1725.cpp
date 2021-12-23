class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int count=0;
        int max=0;

        for (vector<int>rectangle: rectangles) 
            {
                int k=min(rectangle[0],rectangle[1]);
                
                if(k>max)
                {
                    count =1;
                    max=k;
                }
                else if(k==max)
                {
                    count++;
                }
            }
        
        return count;
    }
};
