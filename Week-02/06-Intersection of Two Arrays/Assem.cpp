// Author: Assem
// Problem:  Intersection of Two Arrays
// Link: https://leetcode.com/problems/intersection-of-two-arrays
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        // nums1 = [4,9,5], nums2 = [9,4,9,8,4]
        set<int> v = {};
        if (nums1.size() < nums2.size())
        {
            set<int> s(nums2.begin(), nums2.end());
            for (int i = 0; i < nums1.size(); i++)
            {
                if (s.count(nums1[i]))
                {
                    v.insert(nums1[i]);
                }
            }
        }
        else
        {
            set<int> s(nums1.begin(), nums1.end());
            for (int i = 0; i < nums2.size(); i++)
            {
                if (s.count(nums2[i]))
                {
                    v.insert(nums2[i]);
                }
            }
        }
        vector<int> result(v.begin(), v.end());
        return result;
    }
};

int main()
{
    return 0;
}
