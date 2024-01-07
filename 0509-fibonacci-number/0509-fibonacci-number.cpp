class Solution {
public:
   /* int topdownapproach(vector<int>&dp,int n)
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
    }*/
    int bottomupapproach(int n)
    {
        vector<int>dp(n+1,-1);
        dp[0]=0;
        if(n==0)
        {
            return dp[n];
        }
        dp[1]=1;
        if(n==1)
        {
            return dp[n];
        }
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    int fib(int n) { 
       /* vector<int>dp(n+1,-1);
        int ans =topdownapproach(dp,n);
        return ans;*/
        int ans=bottomupapproach( n);
        return ans;
        
    }
};