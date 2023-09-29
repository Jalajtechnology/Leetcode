class Solution {
public:
    void sortColors(vector<int>& nums) {
        int  i=0;
        int j=nums.size()-1;
        int k=nums.size()-1;
        while(i!=j)
        {
            if(nums[i]==0)
            {
                i++;
            }
            else if(nums[j]!=0)
            {
                j--;
            }
            else if(nums[i]!=0 && nums[j]==0)
            {
                swap(nums[i],nums[j]);
            }
        }
        while(j!=k)
        {
            if(nums[j]==1)
            {
                j++;
            }
            else if(nums[k]==2)
            {
                k--;
            }
            else if(nums[j]==2 && nums[k]==1)
            {
                swap(nums[j],nums[k]);
            }
        }
        return;
        
    }
};