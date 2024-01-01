class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>hashtable;
        bool flag=0;
        int length=0;
        for(int i=0;i<words.size();i++)
        {
            hashtable[words[i]]++;
        }
        
      for(int i=0;i<words.size();i++)
      {
          if(hashtable[words[i]]!=0 && words[i][0] !=words[i][1] )
          {
              string k=words[i];
              reverse(k.begin(),k.end());
              if(hashtable.find(k)!=hashtable.end())
              {
                  length=length+4*min(hashtable[words[i]],hashtable[k]);
                  hashtable[k]=0;
              }
          }
          else if(hashtable[words[i]]!=0 && words[i][0]==words[i][1])
          {
              if(hashtable[words[i]]%2==0 )
              {
                  length=length+2*hashtable[words[i]];
                  
              }
              else if(  hashtable[words[i]]%2 !=0)
              {
                  if(flag==0)
                  {
                      length=length+2*(hashtable[words[i]]);
                      flag=1;
                          
                  }
                  else if(flag==1)
                  {
                      length=length+2*(hashtable[words[i]]-1);
                      
                  }
                  
              }
          }
          hashtable[words[i]]=0;
      }
        return length;
                              
                              
                              
        
                              
         
        
    }
};