class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int uniqueno=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            uniqueno=uniqueno^nums[i];

        }
        return uniqueno;
        
    }
};