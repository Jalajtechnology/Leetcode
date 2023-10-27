class Solution {
public:
    bool binarysearch(int d,vector<int>price,int k)
    {
        int j=0;
        int len=1;
        for(int i=1;i<price.size();i++)
        {
            if(price[i]-price[j]>=d)
            {
                j=i;
                len++;
            }
        }
        if(len>=k)
        {
            return true;
        }
        return false;
    }
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(),price.end());
        int start=0;
        int ans=0;
        int end=price[price.size()-1]-price[0];
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(binarysearch(mid,price,k))
            {
                ans=mid;
                start=mid+1;

            }
            else
            {
                end=mid-1;
            }
            mid=(start+end)/2;
        }
        return ans;
        
    }
};