class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>hashtable;
        for(int i=0;i<nums.size();i++)
        {
            hashtable[nums[i]]++;
        }
        for(auto it:hashtable)
        {
            if(it.second>nums.size()/2)
            {
                return it.first;
            }
        }
        return 0;
        
    }
};