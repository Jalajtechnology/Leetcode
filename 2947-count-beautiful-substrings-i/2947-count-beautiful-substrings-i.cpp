class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int countvowels=0;
        int countconsonants=0;
        int countsubstring=0;
        for(int i=0;i<s.length();i++)
        {
            countvowels=0;
            countconsonants=0;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                countvowels=1;
            }
            else
            {
                countconsonants=1;
            }
            for(int j=i+1;j<s.length();j++)
            {
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
                {
                    countvowels++;
                }
                else
                {
                    countconsonants++;
                }
                if((k!=0) &&(countvowels ==countconsonants) &&(countvowels*countconsonants%k==0))
                {
                    countsubstring++;
                    
                }
            }
            
        }
        return countsubstring;
        
    }
};