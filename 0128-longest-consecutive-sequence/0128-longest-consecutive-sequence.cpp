class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>hashtable;
        int max=INT_MIN;
        if(nums.size()==0)
        {
            return 0;
        }
         for(int i=0;i<nums.size();i++)
         {
             hashtable[nums[i]]=0;
             
         }
         for(int i=0;i<nums.size();i++)
         {
             int count=0;
             if(hashtable[nums[i]]!=1)
             {
                 hashtable[nums[i]]=1;
                 count=1;
                 int j=nums[i]-1;
                 while( hashtable.find(j)!=hashtable.end())
                 {
                     hashtable[j]=1;
                     count=count+1;
                     j=j-1;
                 }
                 if(count>max)
                 {
                     max=count;
                 }
             }
         }
         return max;
        
    }
};