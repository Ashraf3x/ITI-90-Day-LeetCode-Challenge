public class Solution {
    public int[] DailyTemperatures(int[] temperatures) {
        Stack<int> st = new();
        int[] res = new int[temperatures.Length];
        for(int i=0; i<temperatures.Length; i++){
            while(st.Count > 0 && temperatures[i] > temperatures[st.Peek()]){
                int prevIndex = st.Pop();
                res[prevIndex] = i - prevIndex;
            }
            st.Push(i);
        }
        return res;
    }
}
