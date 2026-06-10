class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //we have at maximum 1000 number in each vector start from 1 to 1000, then make an array of 1001 for index compatability
        bool visited[1001];
        for (int i = 0;i < nums1.size(); i++) {
            visited[nums1[i]] = true;
        }

        vector<int> result;
        
        for (int i = 0;i < nums2.size();i++) {
            if (visited[nums2[i]] == true) {
                result.push_back(nums2[i]);
                visited[nums2[i]] = false; //to prevent duplication
            }
        }
        return result;
    }
};
