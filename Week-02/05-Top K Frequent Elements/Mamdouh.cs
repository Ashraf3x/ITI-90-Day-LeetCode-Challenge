        public class Solution
        {
            public int[] TopKFrequent(int[] nums, int k)
            {
                Dictionary<int, int> dict = new();

                foreach (int num in nums)
                {
                    if (dict.ContainsKey(num))
                    {
                        dict[num]++;
                    }
                    else
                    {
                        dict.Add(num, 1);
                    }
                }
              
                List<int>[] arr = new List<int>[nums.Length+1];

                foreach (var item in dict)
                {

                    if (arr[item.Value] == null)
                    {
                        arr[item.Value] = new();
                    }
                    arr[item.Value].Add(item.Key);
                }

                int[] result = new int[k];
                int resultIndex = 0;

                for(int i = arr.Length-1;i >=0; i--)
                {
                    if (arr[i] != null && arr[i].Count != 0)
                    {
                        while (arr[i].Count != 0 && k > 0)
                        {
                            result[resultIndex] = arr[i][0];
                            arr[i].RemoveAt(0);
                            k--;
                            resultIndex++;
                        }
                    }
                }
                return result;
            }
        }
