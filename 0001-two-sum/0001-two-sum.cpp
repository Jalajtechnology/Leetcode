class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashtable;
        for(int i=0;i<nums.size();i++)
        {
            if(hashtable.find((target-nums[i]))!=hashtable.end())
            {
                return {hashtable[(target-nums[i])],i};
            }
            else
            {
                hashtable[nums[i]]=i;
            }
        }
        return {0,0};
        
      
     
        
    }
};