#include <stdio.h>
#include <stdlib.h>

// Notes 
/*
-- Requires already sorted array
-- Note the recursion break condition
-- Note that the when you pass "r" it is the most right index, not the size
as you are passing the left and right indexes.
-- Note that both >= and > condition should work but its left >/>= right
not the other way around. So its cross condition
*/

int binarySearch(int arr[], int l, int r, int x) {
	//printf("INSIDE THE FUNCION");
	if (l >= r) {
		int mid = ((l + r)/2);
		if (arr[mid] == x) {
			printf("The number %d found at index %d\n",x ,mid);
			return arr[mid];			
		}
		if (x < arr[mid])
			return binarySearch(arr, l, mid, x);
		if (x > arr[mid])
			return binarySearch(arr, mid + 1, r, x);
	} else {
		printf("Number %d not found\n", x);
		return -1;
	}
}

int main() {
	int arr[] = {3, 5, 12, 15, 23, 55, 100, 102};
	
	binarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 5);
	binarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 6);
	binarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 10);
	binarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 15);

	binarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 3);
	binarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 102);
	binarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 100);

	return 0;
}
