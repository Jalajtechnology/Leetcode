class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int count=0;
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=height[0];
        suffix[n-1]=height[n-1];
        for(int i=1;i<height.size();i++)
        {
            if(height[i]<prefix[i-1])
            {
                prefix[i]=prefix[i-1];
            }
            else
            {
                prefix[i]=height[i];
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(height[i]<suffix[i+1])
            {
                suffix[i]=suffix[i+1];

            }
            else
            {
                suffix[i]=height[i];
            }
        }
        for(int i=1;i<=n-2;i++)
        {
            cout<<prefix[i]<<suffix[i];
           int k=abs(min(prefix[i],suffix[i])-height[i]);
           cout<<k<<endl;
           count=count+k;
        
        }
        return count;
        
    }
};