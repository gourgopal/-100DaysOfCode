class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n = trips.size(); //count
        int location[1001] = {0};
        int max_end = 0;
        int min_start = 0;
        for (int i = 0; i < n; i++) {
            location[trips[i][2]] -= trips[i][0];
            location[trips[i][1]] += trips[i][0];
            max_end = max(trips[i][2], max_end);
            min_start = min(trips[i][1], min_start);
        }
        
        int current_capacity = 0;
        for (int i = min_start; i <= max_end; i++) {
            current_capacity += location[i];
            
            if (current_capacity > capacity) {
                return false;
            }
        }
        
        return true;
    }
};
