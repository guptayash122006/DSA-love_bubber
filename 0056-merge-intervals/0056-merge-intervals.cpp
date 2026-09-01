class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());

        int n = intervals.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {

            // First interval
            if (ans.empty()) {
                ans.push_back(intervals[i]);
            }
            else {
                // Last merged interval
                vector<int>& v = ans.back();

                int y = v[1];

                // Overlapping
                if (intervals[i][0] <= y) {
                    v[1] = max(y, intervals[i][1]);
                }
                // Not overlapping
                else {
                    ans.push_back(intervals[i]);
                }
            }
        }

        return ans;
    }
};