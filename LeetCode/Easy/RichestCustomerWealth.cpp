//1672. Richest Customer Wealth
//https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealthSoFar = 0;
        for (vector<int> customers : accounts) {
            int wealth = 0;
            for (int amount : customers) {
                wealth += amount;
            }
            maxWealthSoFar = max(wealth, maxWealthSoFar);
        }
        return maxWealthSoFar;
    }
};
