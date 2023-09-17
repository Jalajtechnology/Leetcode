class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>hashtable;
        for(int i=0;i<s.length();i++)
        {
            hashtable[s[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(hashtable[s[i]]==1)
            {

                return i;
            }
        }
        return -1;
        
       
    }
};