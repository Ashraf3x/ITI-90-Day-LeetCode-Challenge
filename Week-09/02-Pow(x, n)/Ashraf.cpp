// Author: Ashraf
// https://leetcode.com/problems/powx-n/description/
// Time Complexity: O(log N)
// Space Complexity: O(log N)
class Solution {
public:
    double myPow(double x, int n) {
        return solve(x, n);
    }
    double solve(double x, long long n) {
        if(n == 0) return 1;
        if(n < 0) return 1 / solve(x, -n);
        double res = solve(x, n / 2);
        if(n % 2 == 0) return res * res;
        return res * res * x;
    }
};