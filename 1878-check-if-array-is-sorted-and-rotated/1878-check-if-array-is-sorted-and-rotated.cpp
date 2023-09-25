class Solution {
public:
    int pivotelement(vector<int>nums,int n)
    {
        int start=0;
        int end=n-1;
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(start==end)
            {
                return start;
            }
            else if(mid>start&&nums[mid]<nums[mid-1])
            {
                return mid-1;
            }
            else if(mid<end && nums[mid]>nums[mid+1])
            {
                return mid;
            }
            else if(nums[mid]>=nums[start])
            {
                start=mid+1;
            }
            else if(nums[mid]<nums[start])
            {
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return -1;
    }
    
    bool check(vector<int>& nums) 
    {
       int pivotindex= pivotelement(nums,nums.size());
       int flag1=1;
       int flag2=1;
       int flag3=1;
    
         
         for(int i=0;i<pivotindex-1;i++)
         {
             if(nums[i]>nums[i+1])
             {
                 flag1=0;
                 break;
             }
         }
         for(int i=pivotindex+1;i<nums.size()-1;i++)
         {
             if(nums[i]>nums[i+1])
             {
                 flag2=0;
                 break;
             }
         }
         if(pivotindex==nums.size()-1)
         {
             return flag1 && flag2;
         }
         else if(pivotindex!=nums.size()-1)
         {
             if(nums[nums.size()-1]>nums[0])
             {
                 flag3=0;
             }
         }
         return flag1&&flag2&&flag3;
         
    }
    
        

    
       
    
};