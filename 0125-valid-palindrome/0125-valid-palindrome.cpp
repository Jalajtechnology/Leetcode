class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                str+=s[i];
            }
            else if(s[i]>=65 && s[i]<=90)
            {
                char ch=s[i]+32;
                str+=ch;
            }
            else if(s[i]>=48 && s[i]<=57)
            {
                str+=s[i];
            }
        }
        int i=0;
        int j=str.length()-1;
        while(i<j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;

        
    }
};