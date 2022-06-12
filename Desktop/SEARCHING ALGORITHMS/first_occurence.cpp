// Find the first occurence of an element in a sorted array 
// Modify the binary search approach to solve in logn time 

#include<iostream>
using namespace std;

int firstOccurence(int [], int, int);

int main()
{
	int arr[] = {1,1,1,2,2,2,2,3,3,3,3,3,3,3,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int target = 2;
	cout << firstOccurence(arr, n, target);
	return 0;
}

int firstOccurence(int arr[], int n, int target)
{
	int low = 0, high = n-1;
	while(low <= high)
	{
		int mid = (low + high)/2;
		if(arr[mid] != target)
		{
			if(arr[mid] > target)
				high = mid - 1;
			else
				low = mid + 1;
		}
		else
		{
			if(mid == 0 || arr[mid-1] != arr[mid])
				return mid;
			else
				high = mid - 1;
		}
	}
	return -1;
}