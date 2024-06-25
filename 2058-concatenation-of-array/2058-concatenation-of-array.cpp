class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         /*vector<int>result;
          int length=2*nums.size();
          int j=0;
          int i=0;
          while(j<length)
          {
               result.push_back(nums[i]);
               i++;
               j++;
               if(i==nums.size())
               {
                    i=0;
               }

          }
          return result;*/
          int l=nums.size();
          int i=0;
          while(i<l)
          {
            nums.push_back(nums[i]);
            i++;
          }
          return nums;
        
    }
};