#include <bits/stdc++.h>
using namespace std;

long long findMinSum(vector<int> &A, vector<int> &B, int N)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i = 0, sum = 0;
    while (i < N)
    {
        sum += (abs(A[i] - B[i]));
        i++;
    }
    return sum;
}
int main()
{
    int N = 3;
    vector<int> A = {4, 1, 2};
    vector<int> B = {2, 4, 1};

    cout << findMinSum(A, B, N);

    return 0;
}