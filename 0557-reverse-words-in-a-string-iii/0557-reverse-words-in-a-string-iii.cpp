class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string word;
        vector<string>arr;
        while(str>>word)
        {
            arr.push_back(word);
            arr.push_back(" ");
        }
        vector<string>brr;
        
        
        for(int k=0;k<arr.size();k++)
        {
            if(arr[k]!=" ")
            {
                reverse(arr[k].begin(),arr[k].end());
                brr.push_back(arr[k]);
                
            }
            else if(arr[k]==" ")
            {
                brr.push_back(" ");
            }
        }
        string p="";
        for(int i=0;i<brr.size();i++)
        {
            if(i==brr.size()-1 && brr[i]==" ")
            {
                break;
            }
            p=p+brr[i];
        }
        return p;
     
    }
};