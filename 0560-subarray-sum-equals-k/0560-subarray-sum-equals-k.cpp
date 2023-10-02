class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        unordered_map<int,int>hashtable;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum==k)
            {
                count=count+1;
            }
            if(hashtable.find(sum-k)!=hashtable.end())
            {
                count=count+hashtable[sum-k];
            }
            hashtable[sum]++;
        }
        return count;
        
    }
};