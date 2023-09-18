class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        int count=0;
        vector<int>result;
        while(j<nums.size())
        {
            if(i==j)
            {
                result.push_back(nums[i]);
                count=count+1;
                j++;
            }
            else if(i!=j && nums[i]!=nums[j])
            {
                i=j;
            }
            else if(i!=j && nums[i]==nums[j])
            {
                j++;
            }
            
        }
        int k;
        for( k=0;k<result.size();k++)
        {
            nums[k]=result[k];
        }
        if(k<nums.size() && nums.size()!=1 )
        {
        auto first=nums.begin()+k;
        auto second=nums.begin()+nums.size();
        nums.erase(first,second);
        }
        return count;


       
        
    }
};