class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>arr;
        arr=score;
          sort(arr.rbegin(), arr.rend());
        unordered_map<int,int>hashtable;
        for(int i=0;i<arr.size();i++)
        {
            hashtable[arr[i]]=i+1;
        }
        vector<string>result;
        for(int i=0;i<score.size();i++)
        {
            if(hashtable[score[i]]==1)
            {
                result.push_back("Gold Medal");
            }
            else if(hashtable[score[i]]==2)
            {
                result.push_back("Silver Medal");
                
            }
            else if(hashtable[score[i]]==3)
            {
                result.push_back("Bronze Medal");
                
            }
            else if(hashtable[score[i]]>3)
            {
                string str= to_string(hashtable[score[i]]);
                result.push_back(str);
            }
        }
        return result;
        
        
    }
};