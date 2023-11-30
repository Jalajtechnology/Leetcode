class Solution {
public:
   
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
       int i=0;
       int j=arr.size()-1;
        while((j-i+1)!=k)
        {
            int l=abs(arr[i]-x);
            int p=abs(arr[j]-x);
            if(l<=p )
            {
                j--;
            }
            else
            {
                i++;
            }
        }
       return vector<int>(arr.begin()+i,arr.begin()+j+1);
        //binarysearch to find no which is greater than x 
        
        
        
    }
};