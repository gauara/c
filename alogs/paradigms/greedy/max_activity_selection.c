#include<stdio.h>
#include<stdlib.h>

void printMaxActivities(int s[], int e[], int numActivity) {
	int maxNum = 0;
	int pickedLast = 0;
	for (int i = 0; i < numActivity; i++) {
		if (i == 0) {
			//printf("%d \n", s[i]);
			printf("%d \n", i);
			maxNum++;
			pickedLast = 0;
		} else {
			if (s[i] >= e[pickedLast]) {
				//printf("%d \n", s[i]);
				printf("%d \n", i);
				maxNum++;
				pickedLast = i;
			}
		}
	}
	printf("Max Activity = %d\n", maxNum);
}

int main() {
 	int s[] =  {1, 3, 0, 5, 8, 5};
    int f[] =  {2, 4, 6, 7, 9, 9};
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}
