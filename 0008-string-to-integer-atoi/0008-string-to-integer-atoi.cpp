class Solution {
public:
    int myAtoi(string s) {
        int j=0;
        if(s.length()==0)
        {
            return 0;
        }
        while(j<s.length() && s[j] == ' ')
        {
            j++;
        }
        long long q=0;
        int no=1;
       
        if(s[j]=='+')
        {
            for(int i=j+1;i<s.length();i++)
            {
            if(s[i] !='0' && s[i] !='1' && s[i] !='2' && s[i] !='3' && s[i] !='4' && s[i] !='5'  && s[i]!='6' && s[i] !='7'&& s[i]!='8' && s[i] !='9' )
                {
                    return q;
                }
                else
                {
                    
                    if(q*10+s[i]-'0' <=INT_MAX)
                    {
                        q=q*10+s[i]-'0';
                    }
                    else
                    {
                        return INT_MAX;
                    }
                }
                
            }


        }
        else if(s[j]=='-')
        {
            no=-1;
            for(int i=j+1;i<s.length();i++)
            {
            if(s[i] !='0' && s[i] !='1' && s[i] !='2' && s[i] !='3' && s[i] !='4' && s[i] !='5'  && s[i]!='6' && s[i] !='7'&& s[i]!='8' && s[i] !='9' )
                {
                    return -1* q;
                }
                else
                {
                    
                    if(q*10+s[i]-'0' <=INT_MAX)
                    {
                        q=q*10+s[i]-'0';
                    }
                    else
                    {
                        return INT_MIN;
                    }
                }
            }
        }
        else if(s[j]!='+' && s[j]!='-')
        {
            for(int i=j;i<s.length();i++)
            {
                if(s[i] !='0' && s[i] !='1' && s[i] !='2' && s[i] !='3' && s[i] !='4' && s[i] !='5'  && s[i]!='6' && s[i] !='7'&& s[i]!='8' && s[i] !='9' )
                {
                    return q;
                }
                else
                {
                    
                    if(q*10+s[i]-'0' <=INT_MAX)
                    {
                        q=q*10+s[i]-'0';
                    }
                    else
                    {
                        return INT_MAX;
                    }
                }

            }
        }
        
        if(no>0)
        {
            return q;
        }
        return -1*q;


                


        


        


        
        
        
       
    
        
    }
};