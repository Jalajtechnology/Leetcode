class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
         unordered_map<int,int>hashtable;
        hashtable[A[0]]++;
        hashtable[B[0]]++;
        vector<int>prefix(A.size(),0);
        if(A[0]==B[0])
        {
            prefix[0]=prefix[0]+1;
            
        }
        for(int i=1;i<A.size();i++)
        {
            hashtable[A[i]]++;
            hashtable[B[i]]++;
            if(A[i]==B[i])
            {
                prefix[i]=prefix[i]+1;
            }
            else
            {
                if(hashtable[A[i]]==2)
                {
                    prefix[i]=prefix[i]+1;
                }
                 if(hashtable[B[i]]==2)
                {
                    prefix[i]=prefix[i]+1;
                }
                    
                    
                    
                    
            }
            prefix[i]=prefix[i]+prefix[i-1];
        }
        return prefix;
       
    }
};