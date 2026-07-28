// Author: Ashraf
//  https://leetcode.com/problems/fibonacci-number/description/
// Time Complexity: O(2^N)
// Space Complexity: O(1)
class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        return fib(n-1) + fib(n-2);
    }
};