class Solution {
public:
    string removeOuterParentheses(string s) { 
        stack<char>stack;
        string p="";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(stack.size()>0)
                {
                    p+='(';
                }
                stack.push('(');
            }
            else if(s[i]==')')
            {
                stack.pop();
                if(stack.size()>0)
                {
                    p+=')';
                }
            }

        }
        return p;
    

        
        
    }
};