class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>hashtable;
        if(nums.size()==0)
        {
            return 0;
        }
        
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            hashtable[nums[i]]=0;
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            
            if(hashtable[nums[i]]==0)
            {
                int  count=1;
                int j=nums[i]-1;
                while(hashtable.find(j)!=hashtable.end())
                {
                    count++;
                    hashtable[j]=1;
                    j=j-1;
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