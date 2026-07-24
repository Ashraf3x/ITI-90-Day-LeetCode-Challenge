// Author: Ashraf
// https://leetcode.com/problems/find-k-th-smallest-pair-distance/description/
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l=0, r=nums.back()-nums[0];
        while(l<r){
            int m=l+(r-l)/2;
            int cnt=0;
            for(int i=0, j=0; i<nums.size(); ++i){
                while(j<nums.size() && nums[j]-nums[i]<=m) j++;
                cnt+=j-i-1;
            }
            if(cnt>=k) r=m;
            else l=m+1;
        }
        return l;
    }
};