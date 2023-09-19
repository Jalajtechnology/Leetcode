class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int j=0;
        int max=INT_MIN;
        int length=0;
        while(j<nums.size())
        {
            if(nums[j]==1)
            {
                length=j-i+1;
                if(length>max)
                {
                    max=length;
                }
                j=j+1;

            }
            else if(nums[j]==0)
            {
                j=j+1;
                i=j;
            }
        }
        if(max==INT_MIN)
        {
            return 0;
        }
        return max;
        
    }
};