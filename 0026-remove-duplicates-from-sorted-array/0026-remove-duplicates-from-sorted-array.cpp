class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        int count=0;
        while(j<nums.size())
        {
            if(i==j)
            {
                count=count+1;
                j++;
            }
            else if(i!=j && nums[i]!=nums[j])
            {
                i=j;
            }
            else if(i!=j && nums[i]==nums[j])
            {
                nums.erase(nums.begin()+j);
            }
        }
        return count;


       
        
    }
};