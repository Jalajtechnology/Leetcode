class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0;
        int i=0;
        int j=people.size()-1;
        while(i<j)
        {
            if(people[j]+people[i]>limit)
            {
                count=count+1;
                j--;

            }
            else if(people[j]+people[i]<=limit)
            {
                count=count+1;
                i++;
                j--;
            }
        }
        if(i==j)
        {
            count=count+1;
        }
        return count;

        
    }
};