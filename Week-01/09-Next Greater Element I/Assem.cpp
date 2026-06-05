// Author: Assem
// Problem:  Next Greater Element I
// Link: https://leetcode.com/problems/next-greater-element-i/description/
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result = {};

        for (int i = 0; i < nums1.size(); i++)
        {
                int greater = -1;
                auto index = find(nums2.begin(), nums2.end(), nums1[i]);
                for (auto j = index+1; j != nums2.end(); j++)
                {
                    if (*j > nums1[i])
                    {
                        greater = *j;
                        break;
                    }
                }
                    result.push_back(greater);
            
        }
        return result;
    }
};

int main()
{

    return 0;
}
