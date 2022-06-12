// Count occurences in a sorted array 
// time: logn + logn = logn 

#include<iostream>
using namespace std;

int countOccurences(int [], int, int);
int firstOccurence(int [], int, int);
int lastOccurence(int [], int, int);


int main()
{
	int arr[] = {0,0,0,1,1,2,2,2,3,3,4,4,5,5,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int target = 3;
	cout << countOccurences(arr, n, target);
	return 0;
}

// Uses first and the last occurences of an element 
int countOccurences(int arr[], int n, int target)
{
	int first = firstOccurence(arr, n, target);
	if(first == -1)
		return 0;
	else
	{
		int last = lastOccurence(arr, n, target);
		return last - first + 1;
	}
}


// return the last occurence ina sorted array
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


// return the first occurence in a sorted array 
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