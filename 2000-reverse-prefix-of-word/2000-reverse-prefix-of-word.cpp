class Solution {
public:
    string reversePrefix(string word, char ch) {
        //unordered_map<char,int>hashtable;
       // for(int i=0;i<word.size();i++)
       // {
            //if(hashtable.find(word[i])==hashtable.end())
            //{
           // hashtable[word[i]]=i;
           // }
       // }
        //if(hashtable.find(ch) !=hashtable.end())
        //{
           // int k=hashtable[ch];
           // reverse(word.begin(),word.begin()+k+1);
        //}//
        int index=-1;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                index=i+1;
                break;
            }
        }
        if(index !=-1)
        {
            reverse(word.begin(),word.begin()+index);
        }
        return word;
        
    }
};