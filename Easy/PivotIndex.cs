//724. Find Pivot Index
//Submission: https://leetcode.com/problems/find-pivot-index/submissions/892144820/

public class Solution {
    public int PivotIndex(int[] nums) {
        int sum = 0, leftSum = 0;
        for (int i = 0; i < nums.Length; ++i)
        {
            sum += nums[i];
        }
        for (int i = 0; i < nums.Length; ++i)
        {
            if (leftSum == sum - leftSum - nums[i])
            {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
}
