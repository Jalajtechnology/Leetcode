class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>hashtable1;
        
         for(int i=0;i<words[0].size();i++)
         {
             hashtable1[words[0][i]]++;
             
         }
        for(int i=1;i<words.size();i++)
        {
            unordered_map<char,int>hashtable2;
            for(int k=0;k<words[i].size();k++)
            {
                hashtable2[words[i][k]]++;
                
            }
            for(auto it:hashtable1)
            {
                if(hashtable2.find(it.first)!=hashtable2.end())
                {
                    hashtable1[it.first]=min(hashtable1[it.first],hashtable2[it.first]);
                }
                else
                {
                    hashtable1[it.first]=0;
                }
            }
        }
        vector<string>strr;
        string str="";
        for(auto it:hashtable1)
        {
            if(it.second !=0)
            {
                for(int i=0;i<it.second;i++)
                {
             
                    str+=it.first;
                    strr.push_back(str);
                    str="";
                }
            }
        }
                    
                    
                    
                
            
        
        return strr;
        
    }
};
 