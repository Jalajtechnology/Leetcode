class Solution {
public:
    int subtractProductAndSum(int n) {
        long long product=1;
        long long sum=0;
        while(n!=0)
        {
            int r=n%10;
            sum=sum+r;
            product=product*r;
            n=n/10;

        }
        return (product-sum);
        
    }
};