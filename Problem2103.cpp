class Solution {
public:
    int countPoints(string rings) {
        int arr[10][3]={0};
        int rows = sizeof(arr) / sizeof(arr[0]);
        int col = sizeof(arr[0]) / sizeof(int);
        
        for(int i=0; i<rings.size(); i++)
        {
            if(rings[i]>=48 && rings[i]<=57)
            {
                int index = rings[i]-48;
                char s = rings[i-1];
                switch(s)
                {
                    case 'R':
                        if(arr[index][0]==0)
                        {
                            arr[index][0]=1;  
                        } break;
                    case 'G':
                        if(arr[index][1]==0)
                        {
                            arr[index][1]=1;
                            
                        }break;
                    case 'B':
                        if(arr[index][2]==0)
                        {
                            arr[index][2]=1;
                            
                        }break;
                }
            }
        }
        int count=0;
        for(int i=0; i<10;i++)
        {
            int sum=0;
            for(int j=0; j<3; j++){
                sum+=arr[i][j];
                if(sum==3)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
