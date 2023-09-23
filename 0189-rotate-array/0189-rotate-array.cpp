class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>=nums.size())
        {
            k=k%nums.size();
        }
        
        vector<int>result(nums.size(),0);
        int l=0;
        for(int j=n-k;j<n;j++)
        {
            result[l]=nums[j];
            l=l+1;
        }
        for(int i=0;i<n-k;i++)
        {
            result[i+k]=nums[i];
        }
        for(int i=0;i<result.size();i++)
        {
          nums[i]=result[i];
        }
        
    }
};