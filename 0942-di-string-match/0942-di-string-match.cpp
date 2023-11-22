class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        
        int i=0;
        int j=s.length();
        int k=0;
        while(k<s.length() )
        {
            if(s[k]=='I')
            {
                ans.push_back(i);
                i++;
            }
            else if(s[k]=='D')
            {
                ans.push_back(j);
                j--;
            }
            k++;
        }
        ans.push_back(i);
        return ans;
        
    }
};