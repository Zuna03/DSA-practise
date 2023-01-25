#include <bits/stdc++.h>
using namespace std;

vector<int> minPartition(int N)
{
    vector<int> res;
    vector<int> arr = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (N >= arr[i])
        {
            N -= arr[i];
            res.push_back(arr[i]);
        }
    }

    return res;
}
int main()
{
    vector<int> res = minPartition(121);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}