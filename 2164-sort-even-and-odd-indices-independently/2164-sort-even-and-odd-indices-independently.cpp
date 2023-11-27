class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int i=0;
        while(i<nums.size())
        {
            int min=INT_MAX;
            int index=-1;
            for(int j=i+2;j<nums.size();j=j+2)
            {
                if(min>nums[j])
                {
                    min=nums[j];
                    index=j;
                }
            }
            cout<<min<<endl;
            if(min<nums[i] && min!=INT_MAX)
            {
                swap(nums[index],nums[i]);
            }
            i=i+2;
            
        }
        int j=1;
        while(j<nums.size())
        {
            int max=INT_MIN;
            int index=-1;
            for(int i=j+2;i<nums.size();i=i+2)
            {
                if(max<nums[i])
                {
                    max=nums[i];
                    index=i;
                }
            }
            cout<<max;
            if(nums[j]<max && max!=INT_MIN)
            {
                swap(nums[j],nums[index]);
            }
            j=j+2;
                
        }
        return nums;
        
    }
};