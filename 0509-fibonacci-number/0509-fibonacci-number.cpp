class Solution {
public:
    int topdownapproach(vector<int>&dp,int n)
    {
        if(n==0 ||n==1)
        {
            return n;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        dp[n]=topdownapproach(dp,n-1)+topdownapproach(dp,n-2);
        return dp[n];
    }
    int fib(int n) { 
        vector<int>dp(n+1,-1);
        int ans =topdownapproach(dp,n);
        return ans;
        
    }
};