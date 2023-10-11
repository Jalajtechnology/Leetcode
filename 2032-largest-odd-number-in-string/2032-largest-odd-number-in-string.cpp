class Solution {
public:
    string largestOddNumber(string num) {
        string s="";
        int end=-1;
        
        for(int j=0;j<num.size();j++)
        {
            int l=num[j]-'0';
            if(l%2 !=0)
            {
                end=j;

            }

        }
        if(end==-1)
        {
            return s;
        }
        for(int i=0;i<=end;i++)
        {
            s+=num[i];
        }
        return s;


        
    }
};