class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3] = {0};
        for (int i = 0; i < nums.size(); i++) {
            arr[nums[i]]++;
        }
        int start = 0, end = 0, i = 0;
        while (i < 3) {
            end += arr[i];
            while (start < end) {
               nums[start] = i;
                start++;
            }
            i++;
        }
    }
};
