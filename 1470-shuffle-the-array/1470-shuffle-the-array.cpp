class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>result;
          int k=nums.size()/2;
          int i=0;
          while(i<k && k<nums.size())
          {
               result.push_back(nums[i]);
               result.push_back(nums[k]);
               i++;
               k++;
          }
          return result;
        
    }
};