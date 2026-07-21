// Author: Ashraf
// https://leetcode.com/problems/koko-eating-bananas/description/
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1000000000, ans = r;
        while(l <= r) {
            int m = l + (r - l) / 2;
            long long t = 0;
            for(int p : piles) {
                t += (p + m - 1) / m;
            }
            if(t <= h) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return ans;
    }
};