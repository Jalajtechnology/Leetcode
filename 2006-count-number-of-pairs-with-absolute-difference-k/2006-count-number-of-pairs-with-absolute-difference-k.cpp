class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>hashtable;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            count=count+hashtable[nums[i]+k]+hashtable[nums[i]-k];
            
            hashtable[nums[i]]++;
        }
        return count;
          
    }
};