class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count=0;
        for(int i=0;i<hours.size();i++)
        {
            for(int j=i+1;j<hours.size();j++)
            {
                int sum=hours[i]+hours[j];
                if((sum%24)==0)
                {
                    count=count+1;
                }
            }
        }
        return count;
    }
};