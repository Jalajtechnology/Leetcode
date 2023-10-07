class Solution {
public:
    int finddays(int k,vector<int>weights)
    {
        int sum=0;
        int day=1;
        int j=0;
        while(j<weights.size())
        {
            while(j<weights.size()&&sum+weights[j]<=k )
            {
                sum=sum+weights[j];
                j++;
            }
            if(j<weights.size())
            {
            sum=0;
            day=day+1;
            }

        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            if(max<weights[i])
            {
                max=weights[i];
            }
            sum=sum+weights[i];
            
            
        }
        int start=max;
        int end=sum;
        int mid=(sum+end)/2;
        while(start<=end)
        {
            int k=finddays(mid,weights);
            if(k<=days)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return start;

        
    }
};