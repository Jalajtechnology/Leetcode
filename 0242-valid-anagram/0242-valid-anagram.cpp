class Solution {
public:
    bool isAnagram(string s, string t) {
        set<char>hashtable;
        int i=0;
        int j=0;
        while(i<s.length())
        {
            hashtable.insert(s[i]);
            i++;
        }
        while(j<t.length())
        {
            hashtable.insert(t[j]);
            j++;
        }
        unordered_map<char,int>hashtable1;
        unordered_map<char,int>hashtable2;
        for(int i=0;i<s.length();i++)
        {
            hashtable1[s[i]]++;
        }
        for(int j=0;j<t.size();j++)
        {
            hashtable2[t[j]]++;
        }
        for(auto it:hashtable)
        {
            if(hashtable1[it] != hashtable2[it])
            {
                return false;
            }
        }
        return true;
        
    }
};