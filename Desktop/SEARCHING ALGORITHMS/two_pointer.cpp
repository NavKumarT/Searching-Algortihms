/*
	TWO POINTER APPROACH
	Given an sorted array find a pair with given sum 
	unsorted array: hashing
	sorted array: two pointer approach
*/

#include<iostream>
using namespace std;

bool  twoPointer(int [], int, int);

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 10;
	cout << twoPointer(arr, n, sum);
	return 0;
}


bool twoPointer(int arr[], int n, int sum)
{
	int low = 0, high = n-1;
	while(low < high)
	{
		if(arr[low] + arr[high] == sum)
			return true;
		else if(arr[low] + arr[high] < sum)
			low++;
		else
			high++;
	}
	return false;
}