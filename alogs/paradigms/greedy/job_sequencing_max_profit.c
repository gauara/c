// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include<iostream>
#include<algorithm>
using namespace std;
 
// A structure to represent a job
struct Job
{
   char id;      // Job Id
   int dead;    // Deadline of job
   int profit;  // Profit if job is over before or on deadline
};
 
// This function is used for sorting all jobs according to profit
bool comparison(Job a, Job b)
{
     return (a.profit > b.profit);
}
 
// Returns minimum number of platforms reqquired
void printJobScheduling(Job arr[], int n)
{
    // Sort all jobs according to decreasing order of prfit
    sort(arr, arr+n, comparison);
 
    int result[n]; // To store result (Sequence of jobs)
    int unitsConsumed = 0;
    int totalProfit = 0;
 
	for (int i=0; i<n; i++) {
		printf("ID %c :", arr[i].id);
		printf("Deadline %d :", arr[i].dead);
		printf("Profit %d :", arr[i].profit);
		printf("\n");
	}



    // Iterate through all given jobs
    for (int i=0; i<n; i++)
    {
		if (i == 0) {
			totalProfit = totalProfit + arr[i].profit;
			printf("ID %c\n", arr[i].id);
			unitsConsumed = unitsConsumed + 1;
		} else if (unitsConsumed < arr[i].dead) {
			totalProfit = totalProfit + arr[i].profit;
			printf("ID %c\n", arr[i].id);
			unitsConsumed = unitsConsumed + 1;
		}

    }

    printf("totalProfit %d\n", totalProfit);
}
 
// Driver program to test methods
int main()
{
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs\n";
    printJobScheduling(arr, n);
    return 0;
}


