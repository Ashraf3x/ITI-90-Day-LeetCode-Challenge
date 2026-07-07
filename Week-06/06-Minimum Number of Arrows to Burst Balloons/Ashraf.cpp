// Author: Ashraf
// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/
// Time Complexity: O(n  log n)
// Space Complexity: O(1)
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(), p.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        int c = 1, e = p[0][1];
        for (int i = 1; i < p.size(); ++i) {
            if (p[i][0] > e) {
                c++;
                e = p[i][1];
            }
        }
        return c;
    }
};