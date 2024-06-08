class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>hashtable;
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            hashtable[nums[i]]++;
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(hashtable[nums[i]]==1)
            {
                arr.push_back(nums[i]);
            }
        }
        return arr;
        
    }
};