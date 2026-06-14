class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        set<int> st;
        for(int i :nums){
            st.insert(i);
        }
        int count=1;
        int maxx=1;

        auto it = st.begin();
        auto prev = it;
        ++it;

        while(it != st.end()) {

            if(*it == *prev + 1) {
                count++;
            } else {
                maxx = max(maxx, count);
                count = 1;
            }

            prev = it;
            ++it;
        }

        maxx = max(maxx, count);

        return maxx;
    }
};