class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;
        int n = nums.size(), left = 0, right = n - 1;
        int target = 0;
        int potentialMatch;
        for (int i = 0; i < n - 2; i++) {
            if (i == 0 || (i > 0 && nums[i] != nums[i-1]))
            left = i + 1; right = n - 1;
            while (left < right) {
                potentialMatch = nums[left] + nums[right] + nums[i];
                if (potentialMatch == target) {
                    triplets.push_back({nums[i], nums[left], nums[right]});
                    while (left < right and nums[left+1] == nums[left]) left++;
                    while (left < right and nums[right-1] == nums[right]) right--;
                    left++;
                    right--;
                } else if (potentialMatch < target) {
                    left++;
                } else if (potentialMatch > target) {
                    right--;
                }
            }
        }
        return triplets;
    }
};
