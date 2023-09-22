class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
           int result=0;
           unordered_map<int,int>hashtable;
           for(int i=0;i<nums.size();i++)
           {
               result=result+hashtable[nums[i]-k]+hashtable[nums[i]+k];
               hashtable[nums[i]]++;

           }
           return result;
       
            
                
        
    }
};