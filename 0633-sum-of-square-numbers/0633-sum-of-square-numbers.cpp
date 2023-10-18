class Solution {
public:
    bool judgeSquareSum(int c) {
        int k=(int)(sqrt(c));
        vector<long long>arr;
        for(int i=0;i<=k;i++)
        {
            arr.push_back(i);
        }
        int i=0;
        int j=arr.size()-1;
        while(i<=j)
        {
            if(((arr[i]*arr[i])+(arr[j]*arr[j]))<=c)
            {
                if(((arr[i]*arr[i])+(arr[j]*arr[j]))==c)
                {
                    return true;
                }
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
        
    }
};