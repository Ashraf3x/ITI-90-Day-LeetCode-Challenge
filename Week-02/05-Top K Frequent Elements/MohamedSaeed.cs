public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
        Dictionary<int, int> map = new();
        PriorityQueue<int, int> pq = new();
        int[] result = new int[k];

        foreach(int num in nums) {
            map[num] = map.GetValueOrDefault(num, 0) + 1;
        }

        foreach (var item in map)
        {
            pq.Enqueue(item.Key, -item.Value);
        }


        for (int i = 0; i < k; i++)
        {
            result[i] = pq.Dequeue();
        }

        return result;
    }
}
