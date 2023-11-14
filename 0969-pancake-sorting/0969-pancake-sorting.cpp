class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        if(arr.size()==1)
        {
            return {};
        }
        
        vector<int>ans;
        for(int i=arr.size();i>0;i--)
        {
            unordered_map<int,int>hashtable;
            for(int i=0;i<arr.size();i++)
            {
                hashtable[arr[i]]=i;
            }
            if(hashtable.find(i)!=hashtable.end())
            {
                if(hashtable[i]!=i-1)
                {
                    ans.push_back(hashtable[i]+1);
                    ans.push_back(i);
                    reverse(arr.begin(),arr.begin()+hashtable[i]+1);
                    reverse(arr.begin(),arr.begin()+i);
                }
                
            }
        }
        return ans;
        
    }
};