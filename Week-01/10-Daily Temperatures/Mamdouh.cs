Author : Ahmed Mamdouh
Time : O(n), Space : O(n)

public class Solution
 {
     public int[] DailyTemperatures(int[] temperatures)
     {

         int[] result = new int[temperatures.Length];
         Stack<(int, int)> minMonoStack = new();
         for(int i=0;i < temperatures.Length; i++)
         {
             while (minMonoStack.Count > 0 && (temperatures[i] > minMonoStack.Peek().Item1))
             {
                 int numberIndex = minMonoStack.Peek().Item2;
                 result[numberIndex] = i - numberIndex;
                 minMonoStack.Pop();
             }
             minMonoStack.Push((temperatures[i], i));
         }

         while (minMonoStack.Count > 0)
         {
             result[minMonoStack.Peek().Item2] = 0;
             minMonoStack.Pop();
         }
         return result;
     }
 }
