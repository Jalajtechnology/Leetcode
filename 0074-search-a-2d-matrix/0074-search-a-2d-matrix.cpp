class Solution {
public:
    int findelement(int i,int start,int end,vector<vector<int>>matrix,int target)
    {
        int mid=(start+end)/2;
        while(start<=end)
        {

            if(matrix[i][mid]==target)
            {
                return mid;
            }
            else if(matrix[i][mid]<target)
            {
                start=mid+1;
            }
            else if(matrix[i][mid]>target)
            {
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return -1;

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            if(target>=matrix[i][0] && target<=matrix[i][matrix[i].size()-1])
            {
                int k=findelement(i,0,matrix[i].size()-1,matrix,target);
                if(k!=-1)
                {
                    return true;
                }
            }
        }
        return false;

        
    }
};