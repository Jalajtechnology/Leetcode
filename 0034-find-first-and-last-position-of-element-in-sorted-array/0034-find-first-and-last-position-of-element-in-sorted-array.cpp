class Solution {
public:
    int lastoccurence(vector<int>&nums,int target)
    {
        int index=-1;
        int start=0;
        int end=nums.size()-1;
        int mid=(start+end)/2;
        while(start<=end)
        {

            if(nums[mid]==target)
            {
                index=mid;
                start=mid+1;
            }
            else if(nums[mid]>target )
            {
                end=mid-1;
            }
            
            
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return index;

    }
    int firstoccurence(vector<int>&nums,int target)
    {
        int index=-1;
        int start=0;
        int end=nums.size()-1;
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(nums[mid]==target)
            {
                index=mid;
                end=mid-1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else if(nums[mid]<target )
            {
                start=mid+1;
            }
            
            
            mid=(start+end)/2;
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=firstoccurence(nums,target);
        int p=lastoccurence(nums,target);
        vector<int>ans;
        ans.push_back(l);
        ans.push_back(p);
        return ans;
        
    }
};