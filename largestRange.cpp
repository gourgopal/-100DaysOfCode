#include <vector>
#include <unordered_map>
using namespace std;

vector<int> largestRange(vector<int> array) {
  unordered_map<int, bool> nums;
	int best_length = 0;
	vector<int> best_order = {0, 0};
	for (int num: array) {
		nums[num] = true;
	}
	
	for (int num: array){
		if(!nums[num]) {
			continue;
		}
		
		int left = num - 1;
		int right = num + 1;
		int current_length = 1;
		while (nums.find(left) != nums.end()) {
			current_length++;
			left--;
			nums[num] = false;
		}
		while (nums.find(right) != nums.end()) {
			current_length++;
			right++;
			nums[num] = false;
		}
		
		if (best_length < current_length) {
			best_order[0] = left + 1;
			best_order[1] = right - 1;
			best_length = current_length;
		}
	}
  return best_order;
}
