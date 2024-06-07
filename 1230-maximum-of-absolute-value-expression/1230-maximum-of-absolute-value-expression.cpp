class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        
       /* int max=0;
        for(int i=0;i<arr1.size();i++)
        {
            for(int j=i+1;j<arr1.size();j++)
            {
                int k=abs(arr1[i]-arr1[j]);
                int p=abs(arr2[i]-arr2[j]);
                int l=abs(i-j);
                int sum=k+p+l;
                if(sum>max)
                {
                    max=sum;
                }
            }
        }
        return max;*/
        int Bigmax=INT_MIN;
        int Bigmin=INT_MAX;
        vector<int>first(arr1.size(),0);
        vector<int>second(arr1.size(),0);
        vector<int>third(arr1.size(),0);
        vector<int>four(arr1.size(),0);
        
        for(int i=0;i<arr1.size();i++)
        {
            first[i]=arr1[i]+arr2[i]+i;
            second[i]=arr1[i]+arr2[i]-i;
            third[i]=arr1[i]-arr2[i]+i;
            four[i]=arr1[i]-arr2[i]-i;
            
           
            
        }
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<first.size();i++)
        {
            if(max<first[i])
            {
                max=first[i];
            }
            if(first[i]<min)
            {
                min=first[i];
            }
        }
        if(Bigmax<(max-min))
        {
            Bigmax=max-min;
        }
         max=INT_MIN;
         min=INT_MAX;
          for(int i=0;i<second.size();i++)
        {
            if(max<second[i])
            {
                max=second[i];
            }
            if(second[i]<min)
            {
                min=second[i];
            }
        }
        if(Bigmax<(max-min))
        {
            Bigmax=max-min;
        }
        max=INT_MIN;
        min=INT_MAX;
         for(int i=0;i<third.size();i++)
        {
            if(max<third[i])
            {
                max=third[i];
            }
            if(third[i]<min)
            {
                min=third[i];
            }
        }
        if(Bigmax<(max-min))
        {
            Bigmax=max-min;
        }
        max=INT_MIN;
        min=INT_MAX;
        for(int i=0;i<four.size();i++)
        {
            if(max<four[i])
            {
                max=four[i];
            }
            if(four[i]<min)
            {
                min=four[i];
            }
        }
        if(Bigmax<(max-min))
        {
            Bigmax=max-min;
        }
        return Bigmax;
    }
};