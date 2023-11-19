class Solution {
public:
    long long minimumSteps(string s) {
        int i=0;
        int j=s.length()-1;
        long long count=0;
        long long minswap=0;
        while(i<j)
        {
            if(s[i]=='0')
            {
                i++;
            }
            else if(s[j]=='1')
            {
                j--;
            }
            else if(s[i]=='1' && s[j]=='0')
            {
                minswap=j-i;
                count=count+minswap;
                swap(s[i],s[j]);
                
            }
              
        }
        return count;
        
        
    }
};