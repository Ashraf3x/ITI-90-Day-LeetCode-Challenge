// Author: Ashraf
// Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// Time Complexity: O(n)
// Space Complexity: O(n)
function removeDuplicates(s: string): string {
    let st: string[] = [];
    for (let it of s) {
        if (st.length === 0 || it !== st[st.length - 1]) {
            st.push(it);
        } else {
            st.pop();
        }
    }
    return st.join('');
}