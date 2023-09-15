class Solution {
public:
    int smallestEvenMultiple(int n) {
        int a=2;
        int b=n;
        int gcd=0;
        while(a>0 && b>0)
        {
            if(a>=b)
            {
                a=a-b;
            }
            else if(b>a)
            {
                int c=a;
                a=b;
                b=c;
            }
        }
        if(a==0)
        {
            gcd=b;
        }
        else if(b==0)
        {
            gcd=a;
        }
        int lcm=(2*n)/gcd;
        return lcm;
        
    }
};