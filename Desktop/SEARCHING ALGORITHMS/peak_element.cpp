/*
	Find the peak element in an array(unsorted)

	Tip : every independent array has a peak 
	An element is a peak if it is not smaller than its neighbours 
	Use normal binary search to find the unsorted part 
*/


#include<iostream>
using namespace std;

int getPeak(int [], int);

int main()
{
	int arr[] = { 1, 3, 20, 4, 1, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << getPeak(arr, n);
	return 0;
}


int getPeak(int arr[], int n)
{
	int low = 0, high = n-1;
	while(low <= high)
	{
		int mid = (low + high)/2;
		if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
			return mid;
		if(mid > 0 && arr[mid-1] >= arr[mid])
			high = mid - 1;
		else 
			low = mid + 1;
	}
	return -1;
}

