class Solution {
public:
    int findmin(vector<int>&coins,vector<int>&dp,int amount)
    {
        if(amount==0)
        {
            return 0;
        }
        else if(amount<0)
        {
            return INT_MAX;
        }
        if(dp[amount]!=-1)
        {
            return dp[amount];
        }
        int min=INT_MAX;
        for(int i=0;i<coins.size();i++)
        {
            int ans=findmin(coins,dp,amount-coins[i]);
            if(ans!=INT_MAX)
            {
                ans=ans+1;
            }
            if(ans<min)
            {
                min=ans;
            }
        }
        dp[amount]=min;
        return dp[amount];
        
    
    }
    int coinChange(vector<int>& coins, int amount) {
        
        
        /* solving using dp
        strep 1:create an dp array */
        vector<int>dp(amount+1,-1);
        int ans=findmin(coins,dp,amount);
        
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
        
        
        
    }
};