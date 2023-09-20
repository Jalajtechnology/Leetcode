class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>>output;
         sort(nums.begin(),nums.end());
        
         for(int i=0;i<nums.size()-1;i++)
         {
             if(i>0 && nums[i]==nums[i-1])
             {
                 continue;
             }
             int j=i+1;
             int k=nums.size()-1;
             while(j!=k)
             {
                 if(j==i+1)
                 {
                     int sum=nums[i]+nums[j]+nums[k];
                     if(sum<=0)
                     {
                         if(sum==0)
                         {
                             vector<int>result;
                             result.push_back(nums[i]);
                             result.push_back(nums[j]);
                             result.push_back(nums[k]);
                             output.push_back(result);
                         }
                         j++;

                     }
                     else if(sum>0)
                     {
                         k--;
                     }

                 }
                 else if(j!=i+1)
                 {
                     if(nums[j]==nums[j-1])
                     {
                         j++;
                     }
                     else if(nums[j]!=nums[j-1])
                     {
                         int sum=nums[i]+nums[j]+nums[k];
                         if(sum<=0)
                         {
                             if(sum==0)
                             {
                                 vector<int>result;
                                 result.push_back(nums[i]);
                                 result.push_back(nums[j]);
                                 result.push_back(nums[k]);
                                 output.push_back(result);
                             }
                             j++;
                         }
                         else  if(sum>0)
                         {
                             k--;
                         }
                     }
                 }
             }
         }
         return output;
        
         
    }
};