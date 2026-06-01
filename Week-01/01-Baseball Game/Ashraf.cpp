// Author: Ashraf
// Link: https://leetcode.com/problems/baseball-game/
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> temp;
        for (auto it : operations) {
            if (it == "+") {
                temp.push_back(temp[temp.size() - 1] + temp[temp.size() - 2]);
            } 
            else if (it == "D") {
                temp.push_back(temp.back() * 2);
            } else if (it == "C") {
                temp.pop_back();
            } else
                temp.push_back(stoi(it));
        }
        int sum = 0;
        for (auto it : temp)
            sum += it;
        return sum;
    }
};