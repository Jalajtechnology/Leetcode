class Solution {
public:
    bool judgeSquareSum(int c) {
        int k=(int)(sqrt(c));
        
    
        int i=0;
        int j=k;
        while(i<=j)
        {
            if((long long)i*i+(long long)j*j<=c)
            {
                if((long long)i*i+(long long)j*j==c)
                {
                    return true;
                }
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
        
    }
};