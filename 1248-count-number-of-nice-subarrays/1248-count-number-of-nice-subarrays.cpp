class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int count=0;
        int ans=0;
        while(j<nums.size())
        {
            if(nums[j]%2!=0)
            {
                count=count+1;
            }
            
             if(count>k)
            {
                while(i<=j && count>k )
                {
                    if(nums[i]%2!=0)
                    {
                        count=count-1;
                        
                    }
                    i++;
                }
            }
            ans=ans+(j-i+1);
            
            
            j++;
                
        }
        return ans;
    }
    
   
    
    int numberOfSubarrays(vector<int>& nums, int k) {
        //solution using prefix sum.
         /*for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                nums[i]=0;
            }
            else 
            {
                nums[i]=1;
            }
        }
        unordered_map<int,int>hashtable;
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum==k)
            {
                count=count+1;
            }
            if(hashtable.find(sum-k)!=hashtable.end())
            {
                count=count+hashtable[sum-k];
            }
            hashtable[sum]++;
        }
        return count;*/
        /* using sliding window technique with no extra space */
        int ans=atmost(nums,k)-atmost(nums,k-1);
        
        return ans;
        
        
        
        
       
    }
};