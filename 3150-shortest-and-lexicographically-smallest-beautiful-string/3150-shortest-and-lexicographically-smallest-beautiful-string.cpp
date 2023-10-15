class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string str="";
        vector<string>arr;
        int min=INT_MAX;
        int i=0;
        int j=0;
        int count=0;
        while(i<s.length())
        {
            str=s.substr(i,j-i);
            while(count!=k && j<s.length())
            {
                str+=s[j];
                if(s[j]=='1')
                {
                count++;
                }
                j++;
            }
            cout<<str<<endl;
            if( count<k)
            {
                break;
            }
            else if(count==k)
            {
                arr.push_back(str);
                int length=j-i;
                if(length<min)
                {
                    min=length;
                }
                
                
               
                
                
                if(s[i]=='1')
                {
                    count=count-1;
                }
                i++;


            }
        }
        if(min==INT_MAX)
        {
            return "";
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(min==arr[i].length())
            {
                return arr[i];
            }
        }
        return arr[0];
         
       
        

            
        
          
        
    }
};