        public class Solution
        {
            public bool ContainsNearbyDuplicate(int[] nums, int k)
            {
                Dictionary<int, int> dict = new(); //key --> nums[i] , value = previous index

                for(int i =0;i<nums.Length;i++)
                {
                    if (dict.ContainsKey(nums[i]))
                    {
                        if (Math.Abs(dict[nums[i]] - i) <= k)
                        {
                            return true;
                        }
                        else
                        {
                            dict[nums[i]] = i;//update the index value
                        }
                    }
                    else
                    {
                        dict.Add(nums[i], i); //update the index value
                    }
                }
                return false;
            }
        }
