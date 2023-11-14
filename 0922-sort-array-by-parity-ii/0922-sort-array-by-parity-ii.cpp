class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
        int j=1;
        vector<int>arr(nums.size());
        for(int k=0;k<nums.size();k++)
        {
            if(nums[k]%2==0 && i<arr.size())
            {
                arr[i]=nums[k];
                i=i+2;
            }
            else if(nums[k]%2 !=0 && j<arr.size())
            {
                arr[j]=nums[k];
                j=j+2;

            }
        }
        return arr;
        
    }
};