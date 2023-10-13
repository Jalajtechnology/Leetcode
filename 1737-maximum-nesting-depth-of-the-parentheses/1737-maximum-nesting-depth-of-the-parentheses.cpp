class Solution {
public:
    int maxDepth(string s) {
        stack<char>hashtable;
        int max=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                hashtable.push('(');
            }
            else if(s[i]==')')
            {
                int ans=hashtable.size();
                if(ans>max)
                {
                    max=ans;
                }
                hashtable.pop();

            }
        }
        if(max==INT_MIN)
        {
            return 0;
        }
        return max;



        
    }
};