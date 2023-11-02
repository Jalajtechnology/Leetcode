class Solution {
public:
    int nextGreaterElement(int n) {

        vector<int>arr;
        while(n!=0)
        {
            int k=n%10;
            arr.push_back(k);
            n=n/10;

        }
        reverse(arr.begin(),arr.end());
        int index=-1;
        long long k=0;
        for(int j=arr.size()-2;j>=0;j--)
        {
            if(arr[j]<arr[j+1])
            {
                index=j;
                break;
            }
        }
        if(index==-1)
        {
            return -1;
        }
        for(int j=arr.size()-1;j>index;j--)
        {
            if(arr[j]>arr[index])
            {
                swap(arr[j],arr[index]);
                break;
            }
        }
        reverse(arr.begin()+index+1,arr.end());
        for(int i=0;i<arr.size();i++)
        {
            k=k*10+arr[i];
        }
        if(k>INT_MAX)
        {
            return -1;
        }
        return k;

         


        
    }
};