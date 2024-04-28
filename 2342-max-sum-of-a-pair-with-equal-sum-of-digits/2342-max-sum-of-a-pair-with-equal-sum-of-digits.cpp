class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<long long,long long>hashtable;
        int max=-1;
        for(int i=0;i<nums.size();i++)
        {
            long long sum=0;
            long long  p=nums[i];
            while(nums[i]!=0)
            {
                long long r=nums[i]%10;
                sum=sum+r;
                nums[i]=nums[i]/10;
            }
            if((hashtable.find(sum)) ==(hashtable.end()))
            {
                hashtable[sum]=p;
            }
            else
            {
                
                if((hashtable[sum]+p) >max)
                {
                    max=hashtable[sum]+p;
                }
                if(hashtable[sum]<p)
                {
                    hashtable[sum]=p;
                }
            }
        }
        return max;
        
        
    }
};