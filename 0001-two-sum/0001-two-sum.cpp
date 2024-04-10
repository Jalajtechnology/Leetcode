class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashtable;
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            if(hashtable.find(target-nums[i])!=hashtable.end())
            {
                arr.push_back(i);
                arr.push_back(hashtable[target-nums[i]]);
                break;
            }
            else
            {
                hashtable[nums[i]]=i;
            }
        }
        return arr;
    }
          
};