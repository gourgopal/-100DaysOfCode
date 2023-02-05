//1480. Running Sum of 1d Array
//submission: https://leetcode.com/problems/running-sum-of-1d-array/submissions/892139690/

public class Solution {
    public int[] RunningSum(int[] nums) {
        int[] runningSum = new int[nums.Length];
        int sum = 0;
        for (int i = 0; i < nums.Length; ++i) {
            sum += nums[i];
            runningSum[i] = sum;
        }
        return runningSum;
    }
}
