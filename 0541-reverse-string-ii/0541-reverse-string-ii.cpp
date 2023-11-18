class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        while(i<s.length())
        {
            if(i+k<s.length())
            {
                reverse(s.begin()+i,s.begin()+i+k);
                
            }
            else
            {
                reverse(s.begin()+i,s.begin()+s.length());
            }
            i=i+2*k;
        }
        return s;
        
        
    }
};