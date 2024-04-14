class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        
    long long  k=x;
    long long  l=0;
    
    while(k!=0)
    {
        long long r=k%10;
        l=l*10+r;
        k=k/10;
        
        
        
        
    }
    if(x-l==0)
    {
        return true;
    }
        return false;
        
    }
};