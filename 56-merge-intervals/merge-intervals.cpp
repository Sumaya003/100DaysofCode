class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() <= 1) {
            return intervals;
        }
        
        // Sort the intervals based on the starting times
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans;
        vector<int> currentInterval = intervals[0];
        
        for (int i = 1; i < intervals.size(); i++) {
            // If the current interval overlaps with the next one
            if (intervals[i][0] <= currentInterval[1]) {
                // Merge the intervals by extending the end time
                currentInterval[1] = max(currentInterval[1], intervals[i][1]);
            } else {
                // No overlap, so add the current interval to the answer
                ans.push_back(currentInterval);
                // Move to the next interval
                currentInterval = intervals[i];
            }
        }
        
        // Add the last interval
        ans.push_back(currentInterval);
        
        return ans;
    }
};
