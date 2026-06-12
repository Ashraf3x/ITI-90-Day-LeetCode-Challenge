#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            int tempTarget = target - nums[i];

            if (mp.find(tempTarget) != mp.end())
            {
                return {mp[tempTarget], i};
            }

            mp[nums[i]] = i;
        }

        return {-1, -1};
    }
};
