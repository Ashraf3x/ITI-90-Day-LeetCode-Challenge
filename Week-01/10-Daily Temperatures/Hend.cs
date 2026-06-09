public class Solution {
    public int[] DailyTemperatures(int[] temperatures) {
        int n = temperatures.Length;
        int[] res = new int[n];

        Stack<int> st = new Stack<int>(); // for indices

        for (int i = 0; i < n; i++) {

            while (st.Count > 0 && temperatures[i] > temperatures[st.Peek()]) {
                int prev = st.Pop();
                res[prev] = i - prev;
            }

            st.Push(i);
        }

        return res;
    }
}
