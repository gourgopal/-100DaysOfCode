using System;


public class Program {
	public int[] ArrayOfProducts(int[] array) {
		var productArray = new int[array.Length];
		var leftProduct = 1;
		for (var i = 0; i < array.Length; i++) {
			productArray[i] = leftProduct;
			leftProduct *= array[i];
		}
		
		var rightProduct = 1;
		for (var i = array.Length - 1; i >= 0; i--) {
			productArray[i] *= rightProduct;
			rightProduct *= array[i];
		}
		
		return productArray;
	}
}
