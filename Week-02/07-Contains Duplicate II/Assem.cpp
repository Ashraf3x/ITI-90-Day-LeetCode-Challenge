// Author: Assem
// Problem:  Contains Duplicate II
// Link: https://leetcode.com/problems/contains-duplicate-ii
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) // [1,0,1,1]  k = 1
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (!mp.contains(nums[i]))
            {
                mp[nums[i]] = i;
            }
            else
            {
                if (i - mp[nums[i]] <= k)
                {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    return 0;
}
