public class Solution {
    public int Trap(int[] height) {
        int area = 0, max = 0, prevMax = 0, waterLevel = 0;
        int[] rightMax = new int[height.Length];

        for(int i = height.Length-1; i >= 0; i--) {
            max = max > height[i]? max : height[i];
            rightMax[i] = max;
        }
        
        for(int i = 0; i < height.Length; i++) {
            prevMax = prevMax > height[i]? prevMax : height[i];
            waterLevel = Math.Min(prevMax, rightMax[i]);

            if(waterLevel > height[i]) area += (waterLevel - height[i]);
        }

        return area;
    }
}
