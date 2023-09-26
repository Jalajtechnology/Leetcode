class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=0;
        int max=INT_MIN;                                        
        while(j<prices.size()&& i<prices.size())
        {
            if(i==j)
            {
                j++;
            }
            else if((i!=j) && (prices[i]>prices[j]))
            {
                i++;
                

            }
            else if((i!=j) && (prices[i]<=prices[j]))
            {
                int profit=prices[j]-prices[i];
                if(profit>max)
                {
                    max=profit;
                }
                j++;
            }
        }
        if(max==INT_MIN)
        {
            return 0;
        }
        return max;
        
       
        
    
        
    }
};