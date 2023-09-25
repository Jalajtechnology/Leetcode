class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums1.size()>0 && n>0)
        {
            vector<int>temp;
            int i=0;
            int j=0;
            while(i<m && j<n)
            {
                if(nums1[i]<=nums2[j])
                {
                    temp.push_back(nums1[i]);
                    i++;
                }
                else if(nums2[j]<nums1[i])
                {
                    temp.push_back(nums2[j]);
                    j++;
                }
            }
            if(i==m && j<n)
            {
                while(j<n)
                {
                temp.push_back(nums2[j]);
                j++;
                }
            }
            else if(j==n && i<m)
            {
                while(i<m)
                {
                    temp.push_back(nums1[i]);
                    i++;
                }
            }
            for(int i=0;i<nums1.size();i++)
            {
                nums1[i]=temp[i];
            }
        }
    
        return ;
        
    }
};