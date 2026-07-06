// Author: Ashraf
// https://leetcode.com/problems/non-overlapping-intervals/description/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        int c = 0, e = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < e) {
                c++;
            } else {
                e = intervals[i][1];
            }
        }
        return c;
    }
};