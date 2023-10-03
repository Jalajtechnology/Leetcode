class Solution {
public:
    int findelement(int start,int end,vector<int>nums,int target)
    {
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return -1;
    }
    int findpivotindex(vector<int>&nums)
    {
        int start=0;
        int end=nums.size()-1;
        int mid=(start+end)/2;
        while(start<=end)
        {
            
             if(mid>start && nums[mid]<nums[mid-1])
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
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
        {
            if(target==nums[0])
            {
                return 0;
            }
            return -1;
        }
        int pivotindex=findpivotindex(nums);
        int l=0;
        if(pivotindex+1==nums.size())
        {
             l=findelement(0,pivotindex,nums,target);
            
        }
        else if(pivotindex+1<nums.size())
        {
            l=findelement(0,pivotindex,nums,target);
            cout<<l;
            if(l==-1)
            {
                int q=findelement(pivotindex+1,nums.size()-1,nums,target);
                return q;
            }
        }
        return l;

        
    }
};