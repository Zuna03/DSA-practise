/* Dynamic Programming C++ implementation
of LIS problem */
#include <bits/stdc++.h>
using namespace std;

/* lis() returns the length of the longest
increasing subsequence in arr[] of size n */
int lis(const vector<int> &arr)
{
	vector<int> sub;
	for (int i = 0; i < arr.size(); ++i)
	{
		int x = arr[i];
		if (sub.empty() || sub[sub.size() - 1] <= x)
		{ // Append to LIS if new element is >= last element in LIS
			sub.push_back(x);
		}
		else
		{
			int idx = upper_bound(sub.begin(), sub.end(), x) - sub.begin(); // Find the index of the smallest number > x
			sub[idx] = x;													// Replace that number with x
		}
	}
	return sub.size();
}
/* Driver program to test above function */
int main()
{
	vector<int> arr = {6, 8, 7, 10, 14, 12, 18, 13};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Length of lis is %d\n", lis(arr));

	return 0;
}
