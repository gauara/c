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
 
 	Same as (l+r)/2, but avoids overflow for large l and h
	int m = l+(r-l)/2;
*/

int binarySearch(int arr[], int l, int r, int x) {
	if (l <= r) {
		int mid = (l + r)/2;
		if (arr[mid] == x) {
			printf("\nThe number %d found at index %d",x ,mid);
			return mid;			
		}
		if (x < arr[mid])
			return binarySearch(arr, l, mid-1, x);
		if (x > arr[mid])
			return binarySearch(arr, mid+1, r, x);
	} else {
		printf("\nThe number %d not found", x);	
		return -1;	
	}
	return 0;
}

int main() {
	int arr[] = {3, 5, 12, 15, 23, 55, 100, 102};
	//int arr[] = {3};
	int n = sizeof(arr)/sizeof(arr[0]); 
	
	printf("\nThe size of array is %d", n);	
	binarySearch(arr, 0, n - 1, 5);
	binarySearch(arr, 0, n - 1, 102);
	binarySearch(arr, 0, n - 1, 3);
	binarySearch(arr, 0, n - 1, 10);
	binarySearch(arr, 0, n - 1, 15);

	binarySearch(arr, 0, n - 1, 3);
	binarySearch(arr, 0, n - 1, 102);
	binarySearch(arr, 0, n - 1, 100);

	return 0;
}
