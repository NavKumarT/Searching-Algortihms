// Find the last occurence of an element in a binary search 
// Use binary Search to solve in logn time 

#include<iostream>
using namespace std;

int lastOccurence(int arr[], int, int);

int main()
{
	int arr[] = {1,1,1,2,2,2,3,3,3,5,5,5,6,6,6,6,7,7,7,8,8,9,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int target = 8;
	cout << lastOccurence(arr, n, target);
	return 0;
}

// time: logn
int lastOccurence(int arr[], int n, int target)
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
			if(mid == n-1 || arr[mid+1] != arr[mid])
				return mid;
			else
				low = mid + 1;
		}
	}
	return -1;
}