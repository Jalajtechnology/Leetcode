class Solution {
public:
    int minimumSum(vector<int>& nums) {
        vector<int>prefix(nums.size());
        vector<int>suffix(nums.size());
        int min=INT_MAX;
        prefix[0]=nums[0];
        suffix[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++)
        {
            if(prefix[i-1]<nums[i])
            {
                prefix[i]=prefix[i-1];
            }
            else
            {
                prefix[i]=nums[i];
            }
        }
        for(int j=nums.size()-2;j>=0;j--)
        {
            if(suffix[j+1]<nums[j])
            {
                suffix[j]=suffix[j+1];
            }
            else
            {
                suffix[j]=nums[j];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(prefix[i]<nums[i] && suffix[i]<nums[i])
            {
                if(prefix[i]+suffix[i]+nums[i]<min)
                {
                    min=prefix[i]+suffix[i]+nums[i];
                }
            }
        }
        if(min==INT_MAX)
        {
            return -1;
        }
        return min;
        
    }
};