class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashtable;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(hashtable.find(target-nums[i])!=hashtable.end())
            {
                ans.push_back(hashtable[target-nums[i]]);
                ans.push_back(i);
                break;

            }
            hashtable[nums[i]]=i;
        }
        return ans;
       
        
    }
};