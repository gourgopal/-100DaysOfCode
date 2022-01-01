class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int leftIdx = 0;
        int rightIdx = n - 1;
        while (leftIdx < rightIdx) {
            int sum = numbers[leftIdx] + numbers[rightIdx];
            if (sum == target) {
                return { leftIdx + 1, rightIdx + 1 };
            }
            else if (sum < target) {
                leftIdx++;
            }
            else {
                rightIdx--;
            }
        }
        return {-1, -1};
    }
};
