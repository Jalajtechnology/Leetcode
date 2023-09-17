class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<char>ans;
        for(int i=0;i<words[0].length();i++)
        {
            ans.push_back(words[0][i]);
        }
        for(int i=1;i<words.size();i++)
        {
            vector<char>result;
            unordered_map<char,int>hashtableans;
            for(auto it:ans)
            {
                hashtableans[it]++;
            }
            unordered_map<char,int>hashtablewordsi;
            for(int j=0;j<words[i].length();j++)
            {
                hashtablewordsi[words[i][j]]++;
            }
            for(auto it:hashtableans)
            {
                if(hashtablewordsi.find(it.first)!=hashtablewordsi.end())
                {
                    int k=min(hashtableans[it.first],hashtablewordsi[it.first]);
                    for(int i=0;i<k;i++)
                    {
                        result.push_back(it.first);
                    }

                }
            }
            ans=result;
            
        }
        string str="";
        vector<string>output;
        for(int i=0;i<ans.size();i++)
        {
            str=str+ans[i];
            output.push_back(str);
            str="";
        }
        return output;
    
        
    }
};
 