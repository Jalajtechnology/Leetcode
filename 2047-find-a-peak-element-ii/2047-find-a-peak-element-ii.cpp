class Solution {
public:
    int findmax(int mid,int m,vector<vector<int>>mat)
    {
        int max=INT_MIN;
        int k=0;
        for(int i=0;i<m;i++)
        {
            if(max<mat[i][mid])
            {
                max=mat[i][mid];
                k=i;
            }
        }
        return k;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int start=0;
        int end=mat[0].size()-1;
        int mid;
        int row=-1;
        while(start<end)
        {
            mid=(start+end)/2;
            row=findmax(mid,mat.size(),mat);
            cout<<row;
            if(mid<end && mat[row][mid]<=mat[row][mid+1])
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }

        }
        if(start==end)
        {
            mid=(start+end)/2;
            row=findmax(mid,mat.size(),mat);
        }
        return {row,start};
         
        
    }
};