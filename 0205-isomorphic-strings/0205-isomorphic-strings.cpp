class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>hashtable1;
        unordered_map<char,char>hashtable2;
        for(int i=0;i<s.length();i++)
        {
            if(hashtable1.find(s[i])!=hashtable1.end())
            {
                if(hashtable1[s[i]]!=t[i])
                {
                    return false;
                }
            }
            else if(hashtable1.find(s[i])==hashtable1.end())
            {
                hashtable1[s[i]]=t[i];
            }
        }
        for(int j=0;j<t.length();j++)
        {
            if(hashtable2.find(t[j])!=hashtable2.end())
            {
                if(hashtable2[t[j]] !=s[j])
                {
                    return false;
                }
            }
            else if(hashtable2.find(t[j])==hashtable2.end())
            {
                 hashtable2[t[j]] = s[j];
            }
        }
        return true;
           
        
        
    }
};