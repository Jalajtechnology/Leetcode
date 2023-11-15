class Solution {
public:
    string reversePrefix(string word, char ch) {
        unordered_map<char,int>hashtable;
        for(int i=0;i<word.size();i++)
        {
            if(hashtable.find(word[i])==hashtable.end())
            {
            hashtable[word[i]]=i;
            }
        }
        if(hashtable.find(ch) !=hashtable.end())
        {
            int k=hashtable[ch];
            reverse(word.begin(),word.begin()+k+1);
        }
        return word;
        
    }
};