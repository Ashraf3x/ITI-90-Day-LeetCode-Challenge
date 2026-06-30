// Author: Ashraf
// Link: https://leetcode.com/problems/minimum-window-substring/description/
// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
public:
// -4 -1 -1 0 1 2 
// -4 -4  2  2   2  2 

    vector<vector<int>> threeSum(vector<int>& nums) {
       int n= nums.size();
       sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
       for(int i  = 0;i<n-2;i++){
            int sum = nums[i];
            int l = i+1, r = n-1;
            if(i> 0&& nums[i]==nums[i-1]){
                continue;
            }
            while(l<r){
                if(nums[l] + nums[r] + sum ==0){
                    ans.push_back({sum,nums[l] , nums[r]});
                    while(l<r && nums[l]==nums[l+1])l++;
                    while(l<r && nums[r]==nums[r-1])r--;
                    l++,r--;

                }
                else if(nums[l] + nums[r] + sum>0)r--;
                else l++;
            }
       }

        return ans;

    }
};