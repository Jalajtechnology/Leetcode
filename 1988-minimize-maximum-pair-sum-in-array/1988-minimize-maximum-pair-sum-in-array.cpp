class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int max=INT_MIN;
        while(i<j)
        {
            if(max<nums[i]+nums[j])
            {
                max=nums[i]+nums[j];
            }
            i++;
            j--;
        }
        return max;

        
    }
};