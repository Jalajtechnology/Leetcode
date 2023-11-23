class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.length()-1;
        while(s[i]==s[j] && i<j)
        {
            while(s[i]==s[i+1] && i<j)
            {
                i++;
            }
            while(s[j]==s[j-1] && j>i)
            {
                j--;
            }
            i++;
            j--;
        }
        if(j<i)
        {
            return 0;
        }
        return j-i+1;
       
        
    }
};