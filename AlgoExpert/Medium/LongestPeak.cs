using System;

public class Program {
	public static int LongestPeak(int[] array) {
		var i = 1;
		var highest_peak = 0;
		while (i < array.Length - 1) {
			var isPeak = array[i - 1] < array[i] && array[i] > array[i + 1];
			if(!isPeak) {
				i++;
				continue;
			}
			
			var leftIdx = i - 2;
			while (leftIdx >= 0 && array[leftIdx] < array[leftIdx + 1])
				leftIdx--;
			
			var rightIdx = i + 2;
			while (rightIdx <= array.Length - 1 && array[rightIdx] < array[rightIdx - 1])
				rightIdx++;
			
			var current_peak = rightIdx - leftIdx - 1;
			highest_peak = Math.Max(current_peak, highest_peak);
			i = rightIdx;
		}
		return highest_peak;
	}
}
