#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minSoFar = prices[0], maxProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        minSoFar = min(minSoFar, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minSoFar);
    }
    return maxProfit;
}

int main()
{
    vector<int> v = {7,6,4,3,1};
    cout << maxProfit(v);

    return 0;
}