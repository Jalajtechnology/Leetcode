class Solution {
public:

// reverse array from nums.size()-1 to nums.size()-k then reverse from 0 to n-k-1  then reverse the whole num//
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