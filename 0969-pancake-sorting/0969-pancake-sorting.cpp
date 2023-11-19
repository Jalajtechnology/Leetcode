class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        unordered_map<int,int>hashtable;
        vector<int>brr;
        for(int i=arr.size();i>0;i--)
        {
            for(int i=0;i<arr.size();i++)
            {
                hashtable[arr[i]]=i;
            }
            if(hashtable.find(i)!=hashtable.end())
            {
            if(hashtable[i]!=i-1)
            {
                reverse(arr.begin(),arr.begin()+hashtable[i]+1);
                brr.push_back(hashtable[i]+1);
                reverse(arr.begin(),arr.begin()+i);
                brr.push_back(i);
                
            }
            }
            
        }
        return brr;
         
       
    }
};