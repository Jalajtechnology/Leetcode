class Solution {
public:
    int getMinSwaps(string num, int k) {
        string s1=num;
        while(k!=0)
        {
            next_permutation(num.begin(),num.end());
            k--;
        }
        int j=0;
        int i=0;
        int result=0;
        while(j<num.size())
        {
            i=j;
            while(num[j]!=s1[i])
            {
                i++;
            }
            while(i>j)
            {
                swap(s1[i-1],s1[i]);
                result++;
                i--;
            }
            j++;

        }
        return result;

        
        
    }
};