class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>hashtable;
        int flag=0;
        for(int i=0;i<words.size();i++)
        {
            hashtable[words[i]]++;
        }
        int count=0;
        
        int max2=0;
        for(int i=0 ;i<words.size();i++)
        {
            if(hashtable[words[i]]!=0)
            {
                if(words[i][0]!=words[i][1])
                {
                    string k=words[i];
                    reverse(k.begin(),k.end());
                    cout<<k;
                    if(hashtable.find(k)!=hashtable.end())
                    {
                        count=count+(4*(min(hashtable[words[i]],hashtable[k])));
                        cout<<count;
                        
                        hashtable[k]=0;
                    }
                    
                }
                else if(words[i][0]==words[i][1])
                {
                    if((hashtable[words[i]]%2)==0)
                    {
                        count=count+(2*(hashtable[words[i]]));
                        
                    }
                    else if((hashtable[words[i]]%2) !=0)
                    {
                       
                        if(flag==0)
                        {
                            count=count+(2*(hashtable[words[i]]));
                            flag=1;
                        }
                        else if(flag !=0)
                        {
                            count=count+(2*(hashtable[words[i]]-1));
                        }
                        
                        
                    }
                    
                    
                
                }
                
                hashtable[words[i]]=0;
            }
        }
        
        return count;
                              
        
                              
         
        
    }
};