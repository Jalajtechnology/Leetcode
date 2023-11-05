class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int champion =-1;
        int max=INT_MIN;
        for(int i=0;i<grid.size();i++)
        {
            int sum=0;
            for(int j=0;j<grid[i].size();j++)
            {
                
                sum=sum+grid[i][j];
            }
            if(max<sum && sum!=0 )
            {
                max=sum;
                champion=i;
            }
        }
        return champion;
        
        
    }
};