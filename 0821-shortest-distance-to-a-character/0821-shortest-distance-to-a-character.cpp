class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
       /* vector<int>output;
       brutforce approach
        for(int i=0;i<s.size();i++)
        {
            int min=INT_MAX;
            
            
                for(int j=0;j<s.size();j++)
                {
                    
                    if(s[j]==c)
                    {
                        int k=abs(j-i);
                        if(k<min)
                        {
                            min=k;
                            
                        }
                        
                    }
                }
                output.push_back(min);
            }*/
       /* using prefix and suffix*/
        vector<int>output;
        vector<int>prefix(s.length());
        vector<int>suffix(s.length());
        int index=-1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                index=i;
                prefix[i]=index;
            }
            else if(s[i]!=c && index==-1)
            {
                prefix[i]=-1;
            }
            else if(s[i]!=c && index !=-1)
            {
                prefix[i]=index;
            }
        }
        index=-1;
        for(int j=s.length()-1;j>=0;j--)
        {
            if(s[j]==c)
            {
                index=j;
                suffix[j]=index;
            }
            else if(s[j]!=c && index==-1)
            {
                suffix[j]=-1;
            }
            else if(s[j]!=c && index !=-1)
            {
                suffix[j]=index;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(prefix[i]==-1)
            {
                int k=abs(i-suffix[i]);
                output.push_back(k);
            }
            else if(suffix[i]==-1)
            {
                int k=abs(i-prefix[i]);
                output.push_back(k);
            }
            else 
            {
                int p=abs(i-prefix[i]);
                int q=abs(i-suffix[i]);
                int r=min(p,q);
                output.push_back(r);
            }
        }
         
        
        return output;
        
    }
};