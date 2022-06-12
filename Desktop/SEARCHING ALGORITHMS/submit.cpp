#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(int [], int);

int main()
{
	int n, q;
	cin >> n >> q;
	int arr[n];
	vector<int> v;

	for(int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	while(q--)
		v.push_back(solve(arr, n));
	for(int x : v)
		cout << x << "\n";
	return 0;
}


int solve(int arr[], int n)
{
    int x, y, sum;
	cin >> x >> y;
	if(x > y)
	{
		sum = 0;
		for(int i = n-x; i <= n-y; i++)
		{
		    sum += arr[i];
		}
		return sum;
	}
	sum = 0;
	for(int i = n-x-1; i <= n-2; i++)
	{
	    sum += arr[i];
	}
	return sum;
}