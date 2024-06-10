class Solution {
public:
    int trap(vector<int>& height) {
        /*int n=height.size();
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
        return count;*/
        int leftmax=0;
        int rightmax=0;
        int left=0;
        int right=height.size()-1;
        int ans=0;
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                if(leftmax<=height[left])
                {
                    leftmax=height[left];
                }
                else
                {
                    ans=ans+(leftmax-height[left]);
                }
                left++;
            }
            else
            {
                if(rightmax<=height[right])
                {
                    rightmax=height[right];
                }
                else
                {
                    ans=ans+(rightmax-height[right]);
                }
                right--;
            }
        }
        return ans;
        
    }
};