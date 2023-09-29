class Solution {
public:
    int maxSubArray(vector<int>& nums) {
           int ans=nums[0];
           int max=nums[0];
           for(int i=1;i<nums.size();i++)
           {
               if(ans+nums[i]>nums[i])
               {
                   ans=ans+nums[i];
               }
               else if(ans+nums[i]<nums[i])
               {
                   ans=nums[i];
               }
               else if(ans+nums[i]==nums[i])
               {
                   ans=nums[i];
               }
               if(ans>max)
               {
                   max=ans;
               }
              
           }
           return max;
        
    }
};