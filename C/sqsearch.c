// C program to implement iterative Binary Search
#include <stdio.h>

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int low, int high, int x)
{
	while (low <= high) {
		int mid = (low + (high - 1)) / 2;

		// Check if x is present at mid
		if (arr[mid] == x)
			return mid;

		// If x greater, ignore left half
		if (arr[mid] < x)
			high = mid - 1;

		// If x is smaller, ignore right half
		else

			low = mid + 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}

int main(void)
{
	int arr[] = { 40, 10, 4, 3, 2 };
	int n = 5;
	int x = 10;
	int result = binarySearch(arr, 0, n, x);
	(result == -1) ? printf("Element is not present"
							" in array")
				: printf("Element is present at "
							"index %d",
							result);
	return 0;
}
