// Search in a infinite sized array 
// Using the idea of binary search to solve in log(pos) time and no extra space


#include<iostream>
using namespace std;

int searchInfinite(int [], int);

int main()
{
	int target = 5;
	cout << searchInfinite(arr, target);
	return 0;
}


// keep increasing the search area by 2 times 
int searchInfinite(int arr[], int target)
{
	if(arr[0] == target)
		return 0;
	int i = 1;
	while(arr[i] < target)
		i = i * 2;
	if(arr[i] == target)
		return i;
	return binarySearch(arr, i/2 + 1, i-1, target);
}