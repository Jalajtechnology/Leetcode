class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>>arr;
        if(nums.size()<4)
        {
            return {} ;
        }
        for(int i=0;i<=nums.size()-4;i++)
        {
            for(int j=i+1;j<=nums.size()-3;j++)
            {
                int k=j+1;
                int l=nums.size()-1;
                long long result=(long long)target-((long long)nums[i]+(long long)nums[j]);
                while(k!=l)
                {
                    long long sum=(long long)nums[k]+(long long)nums[l];
                    if(sum<=result)
                    {
                        if(sum==result)
                        {
                            vector<int>brr;
                            brr.push_back(nums[i]);
                            brr.push_back(nums[j]);
                            brr.push_back(nums[k]);
                            brr.push_back(nums[l]);
                            arr.insert(brr);
                        }
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
            }

        }
        vector<vector<int>>ans;
        for(auto it:arr)
        {
            ans.push_back(it);
        }
        return ans;
        
    }
};