class Solution {
public:
    string reverseWords(string s) {
        vector<string>arr;
        stringstream str(s); 
        string word;
        while(str>>word)
        {
            arr.push_back(word);
            arr.push_back(" ");
            
            
        }
        
        string p="";
        int j=arr.size()-1;
        while(arr[j]==" ")
        {
            j--;
        }
        
        for(int k=j;k>=0;k--)
        {
            if(arr[k] !=" ")
            {
                
                p+=arr[k];
            }
            else if(arr[k]==" ")
            {
                p+=" ";
            }
        }
        return p;
    


        

        

        
    }
};