#include <bits/stdc++.h>
using namespace std;

int maxEqualSum(int N1, int N2, int N3, vector<int> &S1, vector<int> &S2, vector<int> &S3)
{
    stack<int> s1, s2, s3;
    for (int i = N1 - 1; i >= 0; i--)
    {
        s1.push(S1[i]);
    }
    for (int i = N2 - 1; i >= 0; i--)
    {
        s2.push(S2[i]);
    }
    for (int i = N3 - 1; i >= 0; i--)
    {
        s3.push(S3[i]);
    }

    int sum1 = 0, sum2 = 0, sum3 = 0, greatest = INT_MIN;
    for (int i = 0; i < N1; i++)
    {
        sum1 += S1[i];
    }
    for (int i = 0; i < N2; i++)
    {
        sum2 += S2[i];
    }
    for (int i = 0; i < N3; i++)
    {
        sum3 += S3[i];
    }
    while (!S1.empty() && !S2.empty() && !S3.empty())
    {
        if (sum1 == sum2 && sum2 == sum3)
            return sum1;
        greatest = max(sum1, max(sum3, sum2));

        if (greatest == sum1)
        {
            sum1 -= s1.top();
            s1.pop();
        }
        else if (greatest == sum2)
        {
            sum2 -= s2.top();
            s2.pop();
        }
        else
        {
            sum3 -= s3.top();
            s3.pop();
        }
    }
    return 0;
}
int main()
{
    int N1 = 2, N2 = 3, N3 = 1;
    vector<int> S1 = {3, 4},
                S2 = {1, 1, 5},
                S3 = {7};
    cout << endl;
    cout << maxEqualSum(N1, N2, N3, S1, S2, S3);

    return 0;
}