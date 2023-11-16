class Solution {
public:
    string reverseWords(string s) {
        stringstream q(s);
        vector<string>arr;
        string words;
        
        while(q>>words)
        {
            arr.push_back(words);
            arr.push_back(" ");
        }
        int j=arr.size()-1;
        string p="";
        while(arr[j]==" ")
        {
            j--;
        }
        for(int k=j;k>=0;k--)
        {
            if(arr[k]!=" ")
            {
                p=p+arr[k];
            }
            else if(arr[k]==" ")
            {
                p=p+" ";
            }
        }
        return p;

        

        

        
    }
};