class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        vector<int> result;
        int startIndex = 0;
        int endIndex = nums.size() - 1;
        while(startIndex != endIndex) {
            int sum = nums[startIndex] + nums[endIndex];
            if (sum > target) endIndex--;
            else if (sum < target) startIndex++;
            else {
                bool startIndexFlag = true;
                bool endIndexFlag = true;

                for (int i = 0;i < temp.size();i++) {
                    if (temp[i] == nums[startIndex] && startIndexFlag == true) {
                        result.push_back(i);
                        startIndexFlag = false;
                    }
                    else if (temp[i] == nums[endIndex] && endIndexFlag == true) {
                        result.push_back(i);
                        endIndexFlag = false;
                    }
                    if (result.size() == 2) {
                        return result;
                    }
                }
            }
        }
        return result;
    }
};
