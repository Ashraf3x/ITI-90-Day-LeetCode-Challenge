// Author: Ashraf
// https://leetcode.com/problems/boats-to-save-people/description/
// Time Complexity: O(n * log(n))
// Space Complexity: O(1)
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int l = 0,r = people.size() - 1,ret = 0;
        while (l <= r) {
            if (people[l] + people[r] <= limit) {
                l++;
            }
            r--;
            ret++;
        }
        return ret;
    }
};