// Find the square root of a number [floor of it if not perfect square]
// Using binary search approach, logn time better than root n


#include<iostream>
using namespace std;

int squareRoot(int);
int squareRootNaive(int);

int main()
{
	int n = 5;
	cout << squareRootNaive(n);
	cout << " " << squareRoot(n);
	return 0;
}


// time: root n
int squareRootNaive(int n)
{
	int i = 1;
	while(i*i <= n)
		i++;
	return i-1;
}


// time: logn
int squareRoot(int n)
{
	int low = 1, high = n, ans = -1;
	while(low <= high)
	{
		int mid = (low + high)/2;
		int square = mid * mid;
		if(square == n)
			return mid;
		else if(square > n)
			high = mid - 1;
		else
		{
			ans = mid;
			low = mid + 1;
		}
	}
	return ans;	
}