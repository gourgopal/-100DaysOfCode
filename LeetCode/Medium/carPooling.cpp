class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n = trips.size(); //count
        unordered_map<int,int> location;
        int max_end = 0;
        int min_start = 0;
        for (int i = 0; i < n; i++) {
            if (location.find(trips[i][2]) == location.end()) { //end = -ve
                location[trips[i][2]] = -1 * trips[i][0];
            } else {
                location[trips[i][2]] -= trips[i][0];
            }
            
            if (location.find(trips[i][1]) == location.end()) { //start = +ve
                location[trips[i][1]] = trips[i][0];
            } else {
                location[trips[i][1]] += trips[i][0];
            }
            max_end = max(trips[i][2], max_end);
            min_start = min(trips[i][1], min_start);
        }
        
        int current_capacity = 0;
        for (int i = min_start; i <= max_end; i++) {
            if (location.find(i) != location.end()) {
                current_capacity += location[i];
            }
            
            if (current_capacity > capacity) {
                return false;
            }
        }
        
        return true;
    }
};
