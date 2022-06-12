// Binary Search : Iterative and recursive 

#include<iostream>
using namespace std;

int binarySearchIterative(int arr[], int n, int target);
int binarySearchRecursive(int arr[], int low, int high, int target);

int main()
{
	int arr[] = {1,2,3,4,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int target = 3;
	cout << binarySearchIterative(arr, n, target) << " ";
	cout << binarySearchRecursive(arr, 0, n-1, target);
	return 0;	
}


// Space: O(1)
int binarySearchIterative(int arr[], int n, int target)
{
	int low = 0, high = n-1;
	while(low <= high)
	{
		int mid = (low + high)/2;
		if(arr[mid] == target)
			return mid;
		else if(arr[mid] < target)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}

// space: O(logn)
int binarySearchRecursive(int arr[], int low, int high, int target)
{
	if(low > high) 
		return -1;
	int mid = (low + high)/2;
	if(arr[mid] == target)
		return mid;
	else if(target > arr[mid])
		return binarySearchRecursive(arr, mid+1, high, target);
	else
		return binarySearchRecursive(arr, low, mid-1, target);
}