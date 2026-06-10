// Author: Assem
// Problem:  Longest Consecutive Sequence
// Link: https://leetcode.com/problems/longest-consecutive-sequence
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> st(nums.begin(), nums.end());
        int mx = 0;
        for (int num : st)
        {
            if (!st.count(num - 1))
            {
                int current = num;
                int len = 1;

                while (st.count(current + 1))
                {
                    current++;
                    len++;
                }

                mx = max(mx, len);
            }
        }
        return mx;
    }
};

int main()
{

    return 0;
}
