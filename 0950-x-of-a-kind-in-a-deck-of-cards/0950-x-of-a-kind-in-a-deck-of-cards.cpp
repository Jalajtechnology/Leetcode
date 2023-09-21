class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
       
       unordered_map<int,int>hashtable;
       vector<int>result;
       for(int i=0;i<deck.size();i++)
       {
           hashtable[deck[i]]++;
           
       }
       
       for(auto it:hashtable)
       {
           result.push_back(it.second);
       }
       int p=result[0];
       for(int j=1;j<result.size();j++)
       {
           p=__gcd(p,result[j]);
       }
       
    
       if(p==1)
       {
           return false;
       }
       return true;
    
        
    }
};