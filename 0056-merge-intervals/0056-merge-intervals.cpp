class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        vector<int>resulti;
        resulti.push_back(intervals[0][0]);
        resulti.push_back(intervals[0][1]);
        ans.push_back(resulti);
         for(int i=1;i<intervals.size();i++)
         {
             if(ans.back()[1]>=intervals[i][0])
             {
                 if(ans.back()[1]<=intervals[i][1])
                 {
                 ans.back()[1]=intervals[i][1];
                 }
             }
             else 
             {
                 vector<int>result;
                 result.push_back(intervals[i][0]);
                 result.push_back(intervals[i][1]);
                 ans.push_back(result);
             }
         }
         return ans;
        
    }
};