class Solution {
public:
    bool binarysearch(int diff,int pairs,vector<int>nums)
    {
        int count=0;
        int i=0;
        while(i<nums.size()-1)
        {
            if(nums[i+1]-nums[i]<=diff)
            {
                count=count+1;
                i=i+2;
            }
            else
            {
                i++;
            }
        }
        if(count<pairs)
        {
            return false;
        }
        return true;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int start=0;
        int end=nums[nums.size()-1]-nums[0];
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(binarysearch(mid,p,nums))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=(start+end)/2;

        }
        return ans;
        
    }
};