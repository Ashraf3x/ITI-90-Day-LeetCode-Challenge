// Author: Ashraf
// https://leetcode.com/problems/range-sum-query-immutable/description/
// Time Complexity: O(n)
// Space Complexity: O(1)
class NumArray {
public:
    vector<int> pre;
    NumArray(vector<int>& nums) {
        pre.resize(nums.size() + 1);
        for (int i = 0; i < nums.size(); i++)
            pre[i + 1] = pre[i] + nums[i];
    }
    int sumRange(int l, int r) {
        return pre[r + 1] - pre[l];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */