// array rotation by d elements 
/*
Input arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2, n =7
arr[] = [3, 4, 5, 6, 7, 1, 2]
*/   

#include<stdio.h>
#include<stdlib.h>

void rotate(int arr[], int d, int n) {
	int tmp;
	for (int i = 0; i < d; i++) {
		tmp = arr[i];
		arr[i] = arr[n-i];
		arr[n-i] = tmp;
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	//rotate(arr, 3, n-1);
	rotate(arr, 3, n-1);
	for (int i = 0; i < n; i ++) {
		printf("%d", arr[i]);
	}
}