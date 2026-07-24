// Author: Ashraf
// https://leetcode.com/problems/magnetic-force-between-two-balls/description/
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int l=1, r=position.back()-position[0], ans=1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int cnt=1, last=position[0];
            for(int i=1; i<position.size(); ++i){
                if(position[i]-last>=mid){
                    cnt++;
                    last=position[i];
                }
            }
            if(cnt>=m){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return ans;
    }
};