// Author: Youssef Ramadan
// Problem: Baseball Game
// Link: https://leetcode.com/problems/baseball-game/
// Time: O(n)
// Space: O(n)

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "C") {
                record.pop_back();
            }
            else if (operations[i] == "D") {
                record.push_back(record.back() * 2);
            }
            else if (operations[i] == "+") {
                int newRecord = record[record.size() - 2] +
                                record[record.size() - 1];
                record.push_back(newRecord);
            }
            else {
                record.push_back(stoi(operations[i]));
            }
        }

        int total = 0;

        for (int i = 0; i < record.size(); i++) {
            total += record[i];
        }

        return total;
    }
};
