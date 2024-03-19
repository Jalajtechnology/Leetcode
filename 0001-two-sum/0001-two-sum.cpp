class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashtable;
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            if((hashtable.find(target-nums[i])==hashtable.end()))
            {
                hashtable[nums[i]]=i;
            }
            else
            {
               arr.push_back(hashtable[target-nums[i]]);
               arr.push_back(i);
                break;
            }
           
            
        }
        return arr;
    }
};