#include <vector>
using namespace std;
bool isNumInRange (vector<int> array, int n, int pos) {
	if (pos == 0 and array[pos] <= array[pos+1]) {
		return true;
	}
	
	if (pos == n - 1 and array[pos] >= array[pos - 1]) {
		return true;
	}
	
	if (array[pos] <= array[pos+1] and array[pos] >= array[pos - 1]) {
		return true;
	}
	
	return false;
}
vector<int> subarraySort(vector<int> array) {
	int n = array.size();
	int minElement = INT_MAX;
	int maxElement = INT_MIN;
	int leftIdx = -1;
	int rightIdx = -1;
  for (int i = 0; i < n; i++) {
		if (isNumInRange(array, n, i) == false) {
			minElement = min(minElement, array[i]);
			maxElement = max(maxElement, array[i]);
			cout << minElement << " " << maxElement << "\n";
		}
	}
	
	if (minElement == INT_MAX) return {leftIdx, rightIdx};
	
	leftIdx = 0;
	while (leftIdx < n and minElement >= array[leftIdx]) {
		leftIdx++;
	}
	
	rightIdx = n - 1;
	while (rightIdx > 0 and maxElement <= array[rightIdx]) {
		rightIdx--;
	}
	
  return {leftIdx, rightIdx};
}
