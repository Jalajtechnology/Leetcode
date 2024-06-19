class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int Bigsum=0;
        for(int i=0;i<nums.size();i++)
        {
            long long sum=0;
            int count=0;
            
            for(int j=1;(j*j)<=nums[i];j++)
            {
                if((nums[i]%j)==0)
                {
                    
                    if((j)!=(nums[i]/j))
                    {
                        sum=sum+j+(nums[i]/j);
                        count=count+2;
                    }
                    else
                    {
                        sum=sum+j;
                        count=count+1;
                    }
                    
                    
                    
                }
            }
            if(count==4)
            {
                Bigsum=Bigsum+sum;
            }
            
        }
        return Bigsum;
        
    }
};