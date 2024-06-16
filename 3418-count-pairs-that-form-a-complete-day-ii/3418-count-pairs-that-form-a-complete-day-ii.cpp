class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        vector<long long>modular(24,0);
        for(int i=0;i<hours.size();i++)
        {
            modular[hours[i]%24]++;
        }
        long long count=0;
        for(int i=0;i<modular.size();i++)
        {
            if(i==0)
            {
                long long k=modular[i];
                count=count+(((k)*(k-1))/2);
            }
            else if((i!=0) && (modular[i]!=-1))
            {
                
                if((i)!=(24-i))
                {
                    long long k =modular[i]*modular[24-i];
                    count=count+k;
                    
                        
                    
                    
            
                modular[24-i]=-1;
                }
                else
                {
                    long long  k=modular[i];
                    count=count+(((k)*(k-1))/2);
                }
            }
            
        
            
            
        }
        return count;
        
    }
};