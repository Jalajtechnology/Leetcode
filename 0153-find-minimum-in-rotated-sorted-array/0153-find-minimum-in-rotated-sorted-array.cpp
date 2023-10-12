class Solution {
public:
    int binarysearch(int start,int end ,vector<int>nums)
    {
        //checking for github repo
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(start==mid)
            {
                return nums[start];
            }
            else if(mid>start && nums[mid]>nums[mid-1])
            {
                end=mid-1;

            }
            mid=(start+end)/2;
        }
        return INT_MAX;
    }
    int findpivot(vector<int>nums)
    {
        int start=0;
        int end=nums.size()-1;
        int mid=(start+end)/2;
    
         while(start<=end)
        {
            if(start==end)
            {
                return start;
            }
    
            
            else if(mid<end && nums[mid]>nums[mid+1])
            {
               return mid ;
            }
            else if(mid>start && nums[mid-1] >nums[mid])
            {
                return mid-1;
            }
            else if(nums[mid]>=nums[start] && nums[start]<=nums[start+1])
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
    int findMin(vector<int>& nums) {
        int k=findpivot(nums);
        cout<<k;
        int l=INT_MAX;
        int p=INT_MAX;
        
        if(k+1==nums.size())
        {
             l=binarysearch(0,k,nums);
        }
        else if(k+1!=nums.size())
        {
            l=binarysearch(0,k,nums);
            cout<<l;
            p=binarysearch(k+1,nums.size()-1,nums);
            cout<<p;
        }
        return min(l,p);

        
    }
};