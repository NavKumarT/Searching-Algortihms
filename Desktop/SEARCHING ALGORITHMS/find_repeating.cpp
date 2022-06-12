/*
	REPEATING ELEMENTS 
	-> only one element repeats multiple times 
	-> all elements from 1 to max(arr) exist
	-> write a solution, no modifications to existing array, O(n) time and no extra space 
	
	-> Better solution: Use a bool arr and mark true for every visited element 
		but uses O(n) extra space 
	-> Efficient approach: Use detecting a loop logic 
*/


include<iostream>
using namespace std;

int findRepeating(int [], int);

int main()
{
	int arr[] = {};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << findRepeating(arr, n);
	return 0;
}

// Time: O(n) space: O(1)
int findRepeating(int arr[], int n)
{
	int slow = arr[0], fast = arr[0];
	do{
		slow = arr[slow];
		fast = arr[arr[fast]];
	}while(slow != fast)
	
	slow = arr[0];
	while(slow != fast)
	{
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;
}