class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int sz = intervals.size();
        if(sz<=1) return intervals;

        sort(intervals.begin(),intervals.end());
        vector<vector<int>>v;
        v.push_back(intervals[0]);
        for(int i=1 ; i<sz ; i++)
        {
            if(intervals[i][0]<=v.back()[1])
            {
                if(intervals[i][1]>v.back()[1]) v.back()[1] = intervals[i][1];
            }
            else
            {
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};
