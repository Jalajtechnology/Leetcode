class Solution {
public:
   int binarysearch(vector<int>nums,int mid)
   {
       int i=0;
       int j=nums.size()-1;
       int count=0;
       while(i<j)
       {
           if(nums[i]+nums[j]<=mid)
           {
               count=count+1;
               i++;
               j--;
           }
           else
           {
               j--;
           }
       }
       return count;
   }
    int minPairSum(vector<int>& nums) {
        int pairs=nums.size()/2;
        
        sort(nums.begin(),nums.end());
        int max=INT_MIN;;
        int start=2;
        
        int ans=0;

        int end=nums[nums.size()-1]+nums[nums.size()-2];
        int mid=(start+end)/2;
        while(start<=end)
        {
            int k=binarysearch(nums,mid);
            cout<<k<<mid<<endl;
            
            if(k>=pairs)
            {
                if(k==pairs)
                {
                    ans=mid;
                }
                
                end=mid-1;
            }
            else if(k<pairs)
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return ans;
       
         
         

        
        
    }
};