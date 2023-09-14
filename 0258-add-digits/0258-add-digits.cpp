class Solution {
public:
    int addDigits(int num) {
        int sum;
        while(num>9)
        {
            sum=0;
            int d=num;
            while(d!=0)
            {
                sum=sum+d%10;
                d=d/10;
            }
            num=sum;
        }
        return num;

        
    }
};