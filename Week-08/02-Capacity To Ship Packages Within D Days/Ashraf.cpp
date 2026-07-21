// Author: Ashraf
// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0, r = 0;
        for(auto it : weights) {
            l = max(l, it);
            r += it;
        }
        int ans = r;
        while(l <= r) {
            int m = l + (r - l) / 2;
            int d = 1, cur = 0;
            for(int w : weights) {
                if(cur + w > m) {
                    d++;
                    cur = w;
                } else {
                    cur += w;
                }
            }
            if(d <= days) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return ans;
    }
};