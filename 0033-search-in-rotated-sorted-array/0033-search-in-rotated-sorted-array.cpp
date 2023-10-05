class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>=nums[start])//identification of sorted part
            {
                if(target>=nums[start] && target <nums[mid])//iftarget coming in sorted part eliminating other part
                {
                    end=mid-1;
                }
                else //if target not coming in sorted part eliminating sorted part
                {
                    start=mid+1;
                }
            }
            else
            {
                if(target>nums[mid] && target<=nums[end])
                {
                    start=mid+1;
                }
                else 
                {
                    end=mid-1;
                }
            }
            mid=(start+end)/2;

        }
        return -1;
        
    }
};