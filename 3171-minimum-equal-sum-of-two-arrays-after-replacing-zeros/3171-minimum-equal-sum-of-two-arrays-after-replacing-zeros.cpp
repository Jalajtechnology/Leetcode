class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0;
        int count1zero=0;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]==0)
            {
                sum1=sum1+1;
                count1zero++;
            }
            else 
            {
                sum1=sum1+nums1[i];
            }
            
            
        }
        long long sum2=0;
        int count2zero=0;
        for(int i=0;i<nums2.size();i++)
        {
            if(nums2[i]==0)
            {
                sum2=sum2+1;
                count2zero++;
            }
            
            else
            {
                sum2=sum2+nums2[i];
            }
            
        }
        cout<<sum1<<sum2;
        cout<<count1zero <<count2zero;
        
            if(sum2>sum1)
            {
                int l=sum2-sum1;
                if((count1zero>0))
                {
                    return sum2;
                }
            }
            else if(sum1>sum2)
            {
                int l=sum1-sum2;
                if(count2zero>0)
                {
                    return sum1;
                }
                
            }
        else if(sum1==sum2)
        {
            return sum1;
        }
        
        
        return -1;
        
        
        
    }
};