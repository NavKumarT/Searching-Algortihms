// count number of 1s in a sorted binary array 
// time: logn 


#include<iostream>
using namespace std;

int countOnes(int [], int);

int main()
{
	int arr[] = {0,0,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << countOnes(arr, n);
	return 0;
}


// Modifies the firstoccurence function to solve in logn time 
int countOnes(int arr[], int n)
{
	int low = 0, high = n-1;
	while(low <= high)
	{
		int mid = (low + high)/2;
		if(arr[mid] != 1)
			low = mid + 1;
		else
		{
			if(mid == 0 || arr[mid-1] == 0)
				return n-mid;
			else 
				high = mid - 1;
		}
	}
	return 0;
}