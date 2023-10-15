class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string>arr;
        int min=INT_MAX;
        if(k==1)
        {
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='1')
                {
                    return "1";
                }

            }
            return "";
        }
        for(int i=0;i<s.length();i++)
        {
            int count=0;
            string str="";
            str+=s[i];
            if(s[i]=='1')
            {
                count++;
            }
            for(int j=i+1;j<s.length();j++)
            {
                str+=s[j];
                if(s[j]=='1')
                {
                    count++;
                }
                if(count==k)
                {
                    int length=j-i+1;
                    if(length<min)
                    {
                        min=length;
                    }
                    arr.push_back(str);
                }
            }
        }
        if(min==INT_MAX)
        {
            return "";

        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(min==(arr[i].length()))
            {
                return arr[i];
            }
        }
        return arr[0];
       
        

            
        
          
        
    }
};