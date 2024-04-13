class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /*unordered_map<int,int>hashtable;
        for(int i=0;i<nums.size();i++)
        {
            hashtable[nums[i]]=0;
        }
        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(hashtable[nums[i]]!=1)
            {
                hashtable[nums[i]]=1;
                int count=1;
                int j=nums[i]-1;
                while(hashtable.find(j)!=hashtable.end())
                {
                    hashtable[j]=1;
                    count++;
                    j--;
                }
                if(count>max)
                {
                    max=count;
                }
            }
        }
        return max;*/
        unordered_map<int,int>hashtable;
        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            hashtable[nums[i]]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(hashtable.find(nums[i]-1)==hashtable.end())
            {
                int count=1;
                int j=nums[i]+1;
                while(hashtable.find(j)!=hashtable.end())
                {
                    count++;
                    j++;
                }
                if(max<count)
                {
                    max=count;
                }
                    
                
            }
        }
        return max;
      
        
        
        
    }
};