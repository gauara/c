#include <stdio.h>
#include <stdlib.h>



int arraySize(int arr[]) {
	return sizeof(arr)/sizeof(arr[0]);
}

int * merge(int larray[], int rarray[]) {
	int arr1Length = arraySize(larray);
	int arr2Length = arraySize(rarray);
	int arr3 = int[arr1Length + arr2Length];

	int i = 0, j = 0, k = 0; 
	while(i < arr1Length && j < arr2Length) {
		if (larray[i] < rarray[j]) {
			arr3[k++] = larray[i];
			i++;
		} else {
			arr3[k++] = larray[j];
			j++;
		}
	}

	if (i == arr1Length) {
		while (j < arr2Length) {
			arr3[k++] = rarray[j];
			j++;
		}
	} else {
		while (i < arr1Length) {
			arr3[k++] = rarray[i];
			i++;
		}
	}
	return arr3;
}


int * mergeSort(int arr[], int l, int r) {
	if (l == r)
		return arr[l];
	else {
		int mid = (l+r)/2;
		int larray[] = mergeSort(arr, l, mid);
		int rarray[] = mergeSort(arr, mid + 1, r);
		return merge(larray, rarray);
	}
}

int main() {
	int arr[] = {3, 5, 12, 15, 23, 55, 100, 102};
	return 0;
}
