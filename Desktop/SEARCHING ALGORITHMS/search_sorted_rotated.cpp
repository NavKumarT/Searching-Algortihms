// Search in a sorted and rotated array 
// We can still use binary search and solve in logn time
// But the constant will be higher than normal binary search 

#include<iostream>
using namespace std;


int searchSortedRotated(int [], int, int);

int main()
{
	int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	cout << searchSortedRotated(arr, n, k);
	return 0;
}

// Search in a sorted and rotated array using modified binary search
int searchSortedRotated(int arr[], int n, int k)
{
	int low = 0, high = n-1;
	while(low <= high)
	{
		int mid = (low + high)/2;
		if(arr[mid] == k)
			return mid;
		if(arr[low] <= arr[mid])
		{
			if(arr[low] <= k && k < arr[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		else
		{
			if(arr[high] >= k && k > arr[mid])
				low = mid + 1;
			else 
				high = mid - 1;
		}
	}
	return -1;
}