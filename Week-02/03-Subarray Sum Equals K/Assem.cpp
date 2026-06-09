// Author: Assem
// Problem:  Min Stack
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int prefix = 0;

        int count = 0;

        mp[0] = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            prefix += nums[i];
            int needed = prefix - k;

            count += mp[needed];
            mp[prefix]++;
        }
        return count;
    }
};

int main()
{

    return 0;
}
