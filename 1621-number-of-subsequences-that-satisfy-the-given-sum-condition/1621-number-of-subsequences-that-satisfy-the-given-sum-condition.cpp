class Solution {
public:
   
    int numSubseq(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        vector<int>power(nums.size());
        power[0]=1;
        for(int i=1;i<nums.size();i++)
        {
            power[i]=((power[i-1]%1000000007)*(2%1000000007))%1000000007;
        }
    
       
        
        int j=nums.size()-1;
        int ans=0;
        int i=0;
        while(i<=j)
        {
            if(nums[i]+nums[j]<=target)
            {
                int p=j-i;
                ans=((ans%1000000007)+(power[p]%1000000007)%1000000007);
                
                i++;
            }
            else
            {
                j--;
            }


        }
        cout<<ans;
        return ans;
        
        
    
        
    }
};