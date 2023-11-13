class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>result(nums.size());
        int i=0;
        int j=nums.size()-1;
        for(int k=result.size()-1;k>=0;k--)
        {
            if((nums[i]*nums[i])>(nums[j]*nums[j]))
            {
                result[k]=nums[i]*nums[i];
                i++;
            }
            else
            {
                result[k]=nums[j]*nums[j];
                j--;
            }
        }
        return result;

            
        
        
        
    }
}; 