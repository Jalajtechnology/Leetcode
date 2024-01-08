class Solution {
public:
    bool checkString(string s) {
        int index1=-1;
        int index2=-1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            {
                index1=i;
            }
            if(s[i]=='b')
            {
                index2=i;
            }
            if(index1>index2 && index2 !=-1)
            {
                return false;
            }
        }
        if(index1 !=-1 && index2==-1)
        {
            return true;
        }
        else if(index1==-1 && index2!=-1)
        {
            return true;
        }
        return true;
        
    }
};