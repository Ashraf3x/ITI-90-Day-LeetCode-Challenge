// Author: Ashraf
// Link: https://leetcode.com/problems/gas-station/description/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int t = 0, s = 0, f = 0;
        for (int i = 0; i < gas.size(); i++) {
            t += gas[i] - cost[i];
            f += gas[i] - cost[i];
            if (f < 0) {
                s = i + 1;
                f = 0;
            }
        }
        return t < 0 ? -1 : s;
    }
};